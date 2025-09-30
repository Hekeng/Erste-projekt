-- //Ctrl+E START

-- СОЗДАНИЕ В ТАБЛИЦ БАЗЕ ДАННЫХ

CREATE DATABASE IF NOT EXISTS my_shop;

CREATE TABLE IF NOT EXISTS my_shop.users (
  id INT PRIMARY KEY AUTO_INCREMENT,
  username VARCHAR(50) NOT NULL,
  password VARCHAR(255) NOT NULL,
  is_active TINYINT DEFAULT 1
);

ALTER TABLE my_shop.users
ADD COLUMN role VARCHAR(10);

CREATE TABLE IF NOT EXISTS my_shop.clients (
  id INT PRIMARY KEY AUTO_INCREMENT,
  client_name VARCHAR(100) NOT NULL
);

CREATE TABLE IF NOT EXISTS my_shop.products (
    id INT PRIMARY KEY AUTO_INCREMENT,
    sku_code VARCHAR(50) NOT NULL UNIQUE, -- Артикул товара. Используем UNIQUE, чтобы он был неповторим.
    sku_name VARCHAR(255) NOT NULL, -- Название товара. Сделаем его обязательным.
    sku_preferences JSON, -- Хранение характеристик в формате JSON.
    sku_active TINYINT DEFAULT 1 -- Поле для "мягкого удаления".
);

ALTER TABLE my_shop.products
ADD COLUMN price DECIMAL(10, 2) NOT NULL DEFAULT 0.00;

ALTER TABLE my_shop.products
CHANGE COLUMN price sku_price DECIMAL(10, 2) NOT NULL DEFAULT 0.00;

CREATE TABLE IF NOT EXISTS my_shop.invoices (
  id INT PRIMARY KEY AUTO_INCREMENT,
  user_id INT,
  client_id INT,
  invoice_date DATETIME DEFAULT CURRENT_TIMESTAMP,
  total_amount DECIMAL(10, 2) NOT NULL,
  FOREIGN KEY (user_id) REFERENCES my_shop.users(id),
  FOREIGN KEY (client_id) REFERENCES my_shop.clients(id)
);

CREATE TABLE IF NOT EXISTS my_shop.invoice_items (
  id INT PRIMARY KEY AUTO_INCREMENT,
  invoice_id INT,
  product_id INT,
  product_name_at_sale VARCHAR(255) NOT NULL,
  price_at_sale DECIMAL(10, 2) NOT NULL,
  quantity INT NOT NULL,
  FOREIGN KEY (invoice_id) REFERENCES my_shop.invoices(id),
  FOREIGN KEY (product_id) REFERENCES my_shop.products(id)
);

-- ВВОД ДАННХ В БАЗУ

INSERT INTO my_shop.users (username, password, is_active)
VALUES
('admin', SHA2('admin_password', 256), 1),
('user1', SHA2('user1_password', 256), 1),
('user2', SHA2('user2_password', 256), 1);

INSERT INTO my_shop.clients (client_name)
VALUES
('Client A'),
('Client B'),
('Client C');

INSERT INTO my_shop.products(sku_code, sku_name, sku_preferences, sku_active)
VALUES
('sku-001', 'Карандаш HB', NULL, 1),
('sku-002', 'Ластик', NULL, 1),
('sku-003', 'Линейка', NULL, 1);


-- изменение базы данных 

UPDATE my_shop.products
SET sku_active = 0
WHERE sku_code = 'sku-002';

UPDATE my_shop.products
SET price = 0.75
WHERE sku_code = 'sku-001';

UPDATE my_shop.users
SET role = 'admin'
WHERE id = 1;

UPDATE my_shop.users
SET role = 'user'
WHERE id IN (2, 3);

-- ТРАНЗАКЦИИ
-- 1. Создание накладной (invoices)
INSERT INTO my_shop.invoices (user_id, client_id, total_amount)
VALUES
(2, 2, 14.50); -- Используем точку для десятичного разделителя

-- 2. Создание позиций накладной (invoice_items)
INSERT INTO my_shop.invoice_items (invoice_id, product_id, product_name_at_sale, price_at_sale, quantity)
VALUES
(LAST_INSERT_ID(), 1, 'Карандаш HB', 0.50, 5),
(LAST_INSERT_ID(), 2, 'Ластик', 1.20, 10);


-- запрос в базу данных

SELECT sku_code, sku_name
FROM my_shop.products
WHERE sku_active = 1;

SELECT id, client_name
FROM my_shop.clients;

SELECT id, username
FROM my_shop.users;

SELECT id, invoice_id, product_id, product_name_at_sale, price_at_sale, quantity
FROM my_shop.invoice_items;

SELECT id, sku_code, sku_name, sku_preferences, sku_active, sku_price
FROM my_shop.products 
WHERE sku_code = 'sku-001';

SELECT 
    product_name_at_sale,
    SUM(quantity) AS total_sold_units,
    SUM(price_at_sale) AS price,-- Общее количество
    SUM(price_at_sale * quantity) AS total_revenue -- Общая сумма
FROM my_shop.invoice_items
WHERE product_id = 1
GROUP BY product_name_at_sale;

SELECT username, password, role
FROM my_shop.users
WHERE username = 'admin' AND password = SHA2('admin_password', 256);





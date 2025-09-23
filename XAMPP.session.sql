CREATE DATABASE IF NOT EXISTS my_shop;

CREATE TABLE IF NOT EXISTS my_shop.users (
  id INT PRIMARY KEY AUTO_INCREMENT,
  username VARCHAR(50) NOT NULL,
  password VARCHAR(255) NOT NULL,
  is_active TINYINT DEFAULT 1
);

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





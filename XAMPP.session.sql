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



// Aufgabe 4 – Supermarkt-Lagerverwaltung
// Ein Supermarkt speichert die Stückzahlen von 20 Produkten in einem Array.
//  Reduziere die Bestände nach 50 Verkäufen (zufällig ausgewählte Produkte).
//  Zähle danach, welche Produkte auf 0 gesunken sind (ausverkauft).
//  Finde das Produkt mit dem niedrigsten Restbestand.
//  Prüfe, ob mehr als die Hälfte aller Produkte unter 5 Stück gefallen ist → Ausgabe
// "Nachbestellung nötig".

//  Задание 4: Управление Складом Супермаркета (Supermarkt-Lagerverwaltung)
// Исходная постановка:
// Супермаркет хранит информацию о количестве единиц 
// (штуках) 20 продуктов в массиве (Array).

// Необходимые действия:

// Сократить запасы после совершения 50 продаж (случайно выбранных продуктов).

// Подсчитать, какие продукты (то есть, сколько их) 
// обнулились (их количество стало 0), что означает, 
// что они распроданы (ausverkauft).

// Найти продукт с самым низким остатком на складе.

// Проверить, если более половины (т.е. более 10) всех продуктов имеют
// остаток менее 5 штук. Если это условие выполняется, вывести 
// соответствующее сообщение (о необходимости пополнения запасов).

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole


	return 0;
}
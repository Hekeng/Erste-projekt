// // Initialisierung
// DEKLARIERE tankFuellungen[50] // Eingabe: Liter
// DEKLARIERE literPreis = 1.95
// DEKLARIERE tagesUmsatz = 0.0
// DEKLARIERE maxTankFuellung = 0.0
// DEKLARIERE wenigerAlsZehnLiter = 0

// // 1. Verarbeitung der Kunden-Daten
// FÜR JEDEN Kunden:
//     // Umsatz berechnen
//     tagesUmsatz = tagesUmsatz + (aktuelleFuellung * literPreis)

//     // Max-Tankfüllung finden
//     WENN aktuelleFuellung > maxTankFuellung:
//         maxTankFuellung = aktuelleFuellung
//         maxKundeIndex = Index
    
//     // Zähler < 10 Liter
//     WENN aktuelleFuellung < 10.0:
//         wenigerAlsZehnLiter++
// ENDE FÜR

// // 2. Tagesergebnis bewerten
// WENN tagesUmsatz > 5000.0:
//     GIB "Sehr guter Tag" AUS
// SONST:
//     GIB "Schwacher Tag" AUS
// ENDE WENN

// // 3. Ergebnisse ausgeben
// GIB tagesUmsatz AUS
// GIB maxTankFuellung AUS
// GIB wenigerAlsZehnLiter AUS

// Исходная постановка:
// Автозаправочная станция хранит объемы в литрах,
// заправленные 50 клиентами, в массиве (Array).

// Необходимые действия:

// Рассчитать дневной оборот (Tagesumsatz) 
// (цена за литр фиксирована, например, 1,95 €).

// Найти клиента с самой большой заправкой (größten Tankfüllung).

// Подсчитать, сколько клиентов заправили менее 10 литров.

// Если дневной оборот превышает 5000 €, вывести "Очень хороший день" 
// ("Sehr guter Tag"), в противном случае - "Слабый день" ("Schwacher Tag").

// Требование к выполнению:
// Сначала создайте соответствующий псевдокод (Pseudocode),
//  а затем переведите его в подходящий исходный код (Quellcode).

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole


	return 0;
}
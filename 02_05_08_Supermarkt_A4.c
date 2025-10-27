
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
#include <stdlib.h>
#pragma execution_character_set("utf-8")
#include <time.h>

void bestandsFuellen(int lagerbestand[], int groesse);
void simuliereVerkaeufe(int lagerbestand[], int groesse, int anzahlVerkaeufe);
void analysiereLager(const int lagerbestand[], int groesse);

int main() {

	system("chcp 65001"); 
	system("cls"); 

    const int ANZAHL_PRODUKTE = 20;
    const int ANZAHL_VERKAEUFE = 50;

    int lagerbestand[ANZAHL_PRODUKTE];

    srand(time(NULL));

    printf("--- Supermarkt-Lagerverwaltung ---\n");
    
    bestandsFuellen(lagerbestand, ANZAHL_PRODUKTE);
    printf("Lager initialisiert (20 Produkte).\n");

    simuliereVerkaeufe(lagerbestand, ANZAHL_VERKAEUFE, ANZAHL_VERKAEUFE);
    printf("%d Verkäufe simuliert.\n", ANZAHL_VERKAEUFE);


    analysiereLager(lagerbestand, ANZAHL_PRODUKTE);
    
    printf("\n--- Analyse abgeschlossen ---\n");

    return 0;
}

void bestandsFuellen(int lagerbestand[], int groesse) {
    for (int i = 0; i < groesse; i++) {
        lagerbestand[i] = rand() % 41 + 10; 
    }
}

// Сокращает запасы после 50 случайных продаж
void simuliereVerkaeufe(int lagerbestand[], int groesse, int anzahlVerkaeufe) {
    for (int i = 0; i < anzahlVerkaeufe; i++) {

        int produktIndex = rand() % groesse; 
        
        if (lagerbestand[produktIndex] > 0) {
            lagerbestand[produktIndex]--; // Продажа (уменьшение на 1)
        }
    }
}

// Выполняет анализ остатков, находит минимумы и проверяет порог
void analysiereLager(const int lagerbestand[], int groesse) {
    int ausverkauftZaehler = 0;
    int geringerBestandZaehler = 0; // Zählt Produkte mit < 5 Stk.
    int niedrigsterBestand = 9999;
    int niedrigsterIndex = -1;
    const int SCHWELLENWERT = 5;

    for (int i = 0; i < groesse; i++) {
        int bestand = lagerbestand[i];
        
        if (bestand == 0) {
            ausverkauftZaehler++;
        }

        if (bestand < SCHWELLENWERT) {
            geringerBestandZaehler++;
        }
        
        if (bestand < niedrigsterBestand) {
            niedrigsterBestand = bestand;
            niedrigsterIndex = i;
        }
    }

    // --- Вывод результатов ---
    printf("\n--- Ergebnis der Analyse ---\n");
    printf("Anzahl ausverkaufter Produkte (Bestand 0): %d\n", ausverkauftZaehler);
    printf("Produkt %d hat den niedrigsten Restbestand von %d Stück.\n", 
           niedrigsterIndex + 1, niedrigsterBestand);
           
    // 4. Проверка, если > 50% продуктов имеют запас < 5
    if (geringerBestandZaehler > (groesse / 2)) {
        printf("\nWARNUNG: Es gibt %d Produkte mit weniger als %d Stück!\n", 
               geringerBestandZaehler, SCHWELLENWERT);
        printf(">>> Es muss dringend nachbestellt werden (mehr als 50%% betroffen). <<<\n");
    } else {
        printf("\nBestandssituation stabil (nur %d Produkte unter %d Stück).\n", 
               geringerBestandZaehler, SCHWELLENWERT);
    }
}
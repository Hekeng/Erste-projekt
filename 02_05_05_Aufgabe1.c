// // Initialisierung
// DEKLARIERE kinoSaal[120] = {0}
// DEKLARIERE freiePlaetze = 120

// // 1. Buchungen verarbeiten
// LIES buchungenListe
// FÜR JEDE Buchung:
//     kinoSaal[Index] = 1 // Platz als besetzt markieren
//     freiePlaetze--
// ENDE FÜR

// // 2. Beste Reihe finden und kompletten Reihe prüfen
// DEKLARIERE besteReiheIndex
// DEKLARIERE maxFreiInReihe = 0
// DEKLARIERE ganzeReiheFrei = FALSCH

// FÜR JEDE Reihe:
//     ZÄHLE freiePlätzeInAktuellerReihe
//     WENN freiePlätzeInAktuellerReihe > maxFreiInReihe:
//         maxFreiInReihe = freiePlätzeInAktuellerReihe
//         besteReiheIndex = Reihe
//     WENN freiePlätzeInAktuellerReihe == 12:
//         ganzeReiheFrei = WAHR
// ENDE FÜR

// // 3. Ergebnisse ausgeben
// GIB freiePlaetze AUS
// GIB besteReiheIndex AUS
// GIB ganzeReiheFrei AUS

// Исходная постановка:
// Кинотеатр имеет 10 рядов по 12 мест в каждом. 
// Представьте это как одномерный массив (int kino[120]), 
// где 0 означает свободно (frei), а 1 означает занято (besetzt).

// Необходимые действия:
// Прочитать список бронирований (например, 15 бронирований). +
// Отметить соответствующие места как занятые (1). +
// Подсчитать, сколько мест еще свободно. +
// Найти ряд с наибольшим количеством свободных мест.+
// Проверить, есть ли полный свободный ряд.

// Требование к выполнению:
// Сначала создайте соответствующий псевдокод (Pseudocode), 
// а затем переведите его в подходящий исходный код (Quellcode).


#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

#include <stdlib.h>  // для rand() и srand()
#include <time.h>    // для time()

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole
	srand(time(NULL)); // Startwert für Zufallszahlen (Seed)

	/////////////////  Wir füllen das Kino /////////

	int kinoSaal[120] = {0};

	for (int i = 0; i < 120; i++)	{
		int belegt_verfügbar = rand() % 2;
		kinoSaal[i] = belegt_verfügbar;
		// printf ("Plaz # %d ist %d \n", i+1, belegt_verfügbar);
		// Sleep(10);
	}

	////////////////// Zählen die Platzen ////////////////

	int besetzt_plaz_kinosal = 0;
	int frei_plaz_kinosal = 0;

	int frei_plaz_reine[10] = {0}; //Anzahl der freien Plätze in jeder Reihe
	int leereSitzeInReihe = 0;

	int voller_frei_reihen_flag = 0; // suchen eine völlig freie Reihe

	for (int i = 0; i < 120; i++)
	{
	////Zählen die Platzen
			if (kinoSaal[i] == 0){
				frei_plaz_kinosal ++;
				leereSitzeInReihe ++;
			} else {
				besetzt_plaz_kinosal ++;
			}
		int numer_reine = i / 12; //In jeder Iteration führen wir eine ganzzahlige Division zur Bestimmung der analysierten Reihe aus.

			if (((i + 1) % 12) == 0) { //WICHTIG!!! Den Divisionsrest anpassen, um die Leerstellen in der ersten und letzten Reihe korrekt zu erhalten.
				frei_plaz_reine[numer_reine] = leereSitzeInReihe;
				// Gleichzeitig vollständig leere Reihe abfangen.
				if (leereSitzeInReihe == 12) {
					voller_frei_reihen_flag = 1;
				}
				leereSitzeInReihe = 0;
			}
	}
	// Nummer der leersten Reihe suchen
	int numer_lear_reine = 0;
	int grossteZahl = -1;

	for (int i = 0; i < 10; i++) {
		if (frei_plaz_reine[i] > grossteZahl) {
			grossteZahl = frei_plaz_reine[i];
			numer_lear_reine = i+1;
		}
	}
	
	printf("Im Kino sind %d Plätze reserviert \n", besetzt_plaz_kinosal);
	printf("Es gibt %d freie Plätze im Kino \n", frei_plaz_kinosal);
	printf("Reihe numer %d enthält die meisten leeren platzen \n", numer_lear_reine);

	if (voller_frei_reihen_flag > 0) {
		printf("Im KinoSaal gibt es %d freie Reihe. \n", voller_frei_reihen_flag);
	}

	return 0;
}

	//////////Debuggen/////////////////

	// for (int i = 0; i < 120; i++) {
	// 	printf ("Plaz # %d ist %d \n", i+1, kinoSaal[i]);
	// 	//Sleep(10);
	// }

	// for (int i = 0; i < 10; i++) {
	// 	printf ("Plaz # %d ist %d \n", i+1, frei_plaz_reine[i]);
	// 	Sleep(10);
	// }

/////////////////////////////////
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
// Прочитать список бронирований (например, 15 бронирований).
// Отметить соответствующие места как занятые (1).
// Подсчитать, сколько мест еще свободно.
// Найти ряд с наибольшим количеством свободных мест.
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

	int kinoSaal[120] = {0};

	for (int i = 0; i < 120; i++)	{

		int belegt_verfügbar = rand() % 2;

		kinoSaal[i] = belegt_verfügbar;
		printf ("Plaz # %d ist %d \n", i+1, belegt_verfügbar);
		Sleep(10);

	}

	for (int i = 0; i < 120; i++)
	{
		int frei_plaz_kinosal = 0;
		int besetzt_plaz_kinosal = 0;

		if (kinoSaal[i] == 0){
			frei_plaz_kinosal ++;
		} else {
			besetzt_plaz_kinosal ++;
		}

		int numer_reine = 0;
		int frei_plaz_reine[10] = {0};

		if (i % 12 != 0)
		{
			/* code */
		}
		



	}
	

	
	

	return 0;
}
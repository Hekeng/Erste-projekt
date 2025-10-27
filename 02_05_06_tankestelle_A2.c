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

// Aufgabe 2 – Tankstellen-Abrechnung
// Eine Tankstelle speichert die Literzahlen von 50 Kunden in einem Array.
//  Berechne den Tagesumsatz (Preis pro Liter fix, z. B. 1,95 €).
//  Finde den Kunden mit der größten Tankfüllung.
//  Zähle, wie viele Kunden weniger als 10 Liter getankt haben.
//  Falls der Tagesumsatz > 5000 €, gib "Sehr guter Tag" aus, sonst "Schwacher
// Tag".

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

#include <stdlib.h>  // для rand() и srand()
#include <time.h>    // для time()

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	srand(time(NULL)); // Startwert für Zufallszahlen (Seed)

	float tankestelle [50] = {0};
	float tankenkostL = 1.95;
	float gesamtMengederBetankung = 0;

	float grosteBetankung = 0;
	int besteKunde = 0;

	int weniger10kunden = 0;
	/////////////Wir tanken den ganzen Tag Autos//////////////

	for ( int i = 0; i < 50; i++) {

	//int temp_val = rand() % (20000 - 100 + 1) + 100; //простое решение

	///////////A complex algorithm makes gas stations more realistic ///////

		int entscheidung = rand() % 7; // 1. Выбираем один из 7 "слотов" (0 до 6)
		int temp_val = 0;
		if (entscheidung <= 3) { // 4 aus 7 - 57% Диапазон А: 10.01 - 65.00 л
			temp_val = rand() % (6500 - 1001 + 1) + 1001; //MIN = 1001; MAX = 6500; 
		} else if (entscheidung <= 5) { // 2 из 7 - 28.5% Диапазон B: 1.00 - 10.00 л
			temp_val = rand() % (1000 - 100 + 1) + 100; //MIN = 100; MAX = 1000;
		} else { 
			temp_val = rand() % (15000 - 6501 + 1) + 6501; // entscheidung == 6 (1 из 7 - 14.5%) Диапазон С: 65.01 - 150.00 л MIN = 6501; MAX = 15000;
		}

	double fuellmenge = temp_val / 100.0;
	tankestelle[i] = fuellmenge; //das Dressing hinzufügen

		gesamtMengederBetankung = gesamtMengederBetankung + tankestelle[i];
		printf("Kunde #%d getankt %.2f fuell \n",  i+1, tankestelle[i]);
		Sleep(5);

		if (grosteBetankung < tankestelle[i]) {
			grosteBetankung = tankestelle[i];
			besteKunde = i;
		}

		if (tankestelle[i] < 10) {
			weniger10kunden ++;
		}
		
	}
	printf("An der Tankstelle wurden %.2f Liter Kraftstoff für insgesamt %.2f Euro \n", gesamtMengederBetankung, gesamtMengederBetankung * tankenkostL);
	printf("Kunde Nummer %d, der %.2f Liter Kraftstoff für %.2f Euro getankt hat, ist heute der beste Kunde. \n", besteKunde+1, grosteBetankung, grosteBetankung * tankenkostL);
	printf("Heute haben %d Kunden weniger als 10 Liter Benzin getankt. \n", weniger10kunden);

	if((gesamtMengederBetankung*tankenkostL) > 5000) {
		printf("Sehr guter Tag\n");
	} else {
		printf("Schwacher Tag\n");
	}

	return 0;
}
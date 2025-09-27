// Aufgabe_02_05_04

// Das Programm soll zunächst das 10 Elemente umfassende

// Integer-Array namens zufZahl mit Zufallszahlen zwischen

// (beiderseits einschließlich) -100 und 100 füllen.

// Anschließend soll ein ebenfalls 10 Elemente langes Array

// namens betrag gefüllt werden. Hierbei soll folgendes gelten:

// betrag[i] = -1, falls zufZahl[i] negativ

// betrag[i] = 0, falls zufZahl[i] = 0

// betrag[i] = 1, falls zufZahl[i] positiv

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

#include <stdlib.h>  // для rand() и srand()
#include <time.h>    // для time()

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	srand(time(NULL)); // Startwert für Zufallszahlen (Seed)

	int zufZahl[10];
	int Betrag[10];

	for (int i = 0; i < 10; i++)
	{
		int zufallszahl =  -100 + rand() % 201;
		zufZahl[i] = zufallszahl;

		printf("zufZahl i=%d ist %d\n", i, zufZahl[i]);

		if (zufallszahl < 0)  {
			Betrag[i] = -1;
		} else if (zufallszahl == 0){
			Betrag[i] = 0;
		} else {
			Betrag[i] = 1;
		}

		printf("Betrag i=%d ist %d\n", i, Betrag[i]);
	}

	return 0;
}
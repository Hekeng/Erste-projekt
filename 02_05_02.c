// Aufgabe_02_05_02

// Das Programm startet mit einer Schleife, in der der User die
// fünf Elemente eines Character-Arrays mit beliebigen Zeichen
// füllen kann. Anschließend soll ein zweites Character-Array,
// das ebenfalls genau 5 Elemente besitzt, mit den selben
// Zeichen gefüllt werden, allerdings in umgekehrter Reihenfolge!

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

#include <stdlib.h>  // для rand() и srand()
#include <time.h>    // для time()

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	char eingabe; // Variable für die Eingabe eines Zeichens

	char arr1[5]; // Erstes Array
	char arr2[5]; // Zweites Array

	// Erstes Array füllen
	for (int i = 0; i < 5; i++) {
		printf("Geben Sie das %d. Zeichen ein: ", i + 1);
		do {
			if (scanf(" %c", &eingabe) != 1) {
				printf("Fehler: Eingabe fehlgeschlagen!\n");
				while(getchar() != '\n'); 
				continue; 
			}
		} while (!isprint(eingabe)); // Schleife wiederholen, wenn Eingabe nicht ein Leerzeichen ist
		arr1[i] = eingabe; // Zeichen im Array speichern
		while(getchar() != '\n');
	}

	for (int i = 0; i < 5; i++) {
		arr2[i] = arr1[4 - i]; // Zweites Array in umgekehrter Reihenfolge füllen
	}
		// Erstes Array ausgeben
	printf("\nAngenommen der User füllte das erste Array wie folgt:\n");
	for (int i = 0; i < 5; i++) {
		printf("arrayA[%d] = %c\n", i, arr1[i]);
	}
	// Zweites Array ausgeben
	printf("\nDann würde das zweite Array so aussehen:\n");
	for (int i = 0; i < 5; i++) {
		printf("arrayB[%d] = %c\n", i, arr2[i]);
	}
	return 0;
}
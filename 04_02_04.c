// Aufgabe_04_02_04


// Das Programm startet mit einer äußeren Schleife, die 3-mal
// durchlaufen wird. Pro Durchlauf:

// •	startet eine erste innere Schleife, 
//die vom User drei Buchstaben abfragt.
// •	nach der ersten inneren Schleife startet eine zweite,
// die alle drei eingegebenen Buchstaben nebeneinander ausgibt.

// Nach der äußeren Schleife endet auch das Programm.

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	for (int i = 0; i < 3; i++) {
		char buchstaben[3];

		// Erste innere Schleife: Abfrage von drei Buchstaben
		for (int j = 0; j < 3; j++) {
			printf("Geben Sie Buchstabe %d ein: ", j + 1);
			scanf(" %c", &buchstaben[j]);
			while (getchar() != '\n');
		}

		// Zweite innere Schleife: Ausgabe der drei Buchstaben nebeneinander
		printf("Eingegebene Buchstaben: ");
		for (int j = 0; j < 3; j++) {
			printf("%c ", buchstaben[j]);
		}
		printf("\n");
	}


	return 0;
}


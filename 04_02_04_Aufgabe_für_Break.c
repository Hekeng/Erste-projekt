// Aufgabe für Break

// Schreibe ein C-Programm, das den Benutzer
// auffordert, eine Zahl einzugeben. Das Programm soll die Summe der eingegebenen
// Zahlen berechnen, bis der Benutzer eine negative Zahl eingibt. Sobald eine
// negative Zahl eingegeben wird, soll die Schleife mit break beendet werden
// und die Gesamtsumme der positiven Zahlen ausgegeben werden.
// Beispielausgabe:


// Geben Sie eine Zahl ein (negativ zum Beenden): 5 
// Geben Sie eine Zahl ein (negativ zum Beenden): 10
// Geben Sie eine Zahl ein (negativ zum Beenden): 3
// Geben Sie eine Zahl ein (negativ zum Beenden): -1
// Die Gesamtsumme der positiven Zahlen ist: 18

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	int summe = 0;
	int zahl;

	while (1) {
		printf("Geben Sie eine Zahl ein (negativ zum Beenden): ");
		scanf("%d", &zahl);

		if (zahl < 0) {
			break;
		}

		summe += zahl;
	}

	printf("Die Gesamtsumme der positiven Zahlen ist: %d\n", summe);

	return 0;
}
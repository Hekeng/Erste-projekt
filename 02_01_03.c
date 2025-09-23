// Aufgabe_02_01_03

// Das Programm fragt zu Beginn einmalig zwei ganze Zahlen ab, die für die Breite und Länge eines Rechteckes stehen. 

// Anschließend startet eine Schleife, in der pro Durchlauf das Produkt der beiden Zahlen (also die Fläche des Rechteckes) abgefragt wird. Die Schleife wird solange wiederholt, solange die Eingabe nicht der Fläche entspricht. 

// Nach der Schleife wird ausgegeben, wie viele Versuche der User benötigte, bis er die korrekte Fläche eingab.

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	float länge, breite, fläche, fläche_variant, reschnung;

	do {
		printf("Geben Sie die Länge des Rechtecks ein (in Meter): \n");
		if (scanf("%f", &länge) != 1) {
			printf("Fehler: Bitte eine Zahl eingeben!\n");
			while (getchar() != '\n'); // Eingabepuffer leeren
			continue;
		}
		{
			/* code */
		}
		





	} while (fläche == fläche_variant);



	return 0;
}
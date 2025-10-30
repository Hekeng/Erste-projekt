#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	int neue_geheimnummer = 0;
	int neue_eingabe = 0;

	do {
		
		do {
		printf("Geben Sie eine neue Geheimnummer ein (1-100): ");
		if (scanf("%d", &neue_geheimnummer) != 1 || (neue_geheimnummer < 1 || neue_geheimnummer > 100)) {
			printf("Fehler: Bitte eine Zahl eingeben!\n");
			while (getchar() != '\n'); // Eingabepuffer leeren
			continue;
		} 
		} while (!(neue_geheimnummer >= 1 && neue_geheimnummer <= 100));

		do {
		printf("Versuchen Sie die Geheimnummer zu erraten: ");
		if (scanf("%d", &neue_eingabe) != 1 || (neue_eingabe < 1 || neue_eingabe > 100)) {
			printf("Fehler: Bitte eine Zahl eingeben!\n");
			while (getchar() != '\n'); // Eingabepuffer leeren
			continue;
		}
		} while (!(neue_eingabe >= 1 && neue_eingabe <= 100));

		if (neue_geheimnummer != neue_eingabe) {
			printf("Falsch! Versuchen Sie es erneut.\n");
		} else {
			printf("Richtig! Sie haben die Geheimnummer erraten.\n");
		}
		
	} while (!(neue_geheimnummer ==  neue_eingabe));


		return 0;
}
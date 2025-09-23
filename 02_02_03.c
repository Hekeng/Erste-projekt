#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	int ausgeschlosseneZahl = -1;

	do {
		printf("Geben Sie eine Zahl ein, die ausgeschlossen werden soll (1-100): \n");

		if ((scanf("%d", &ausgeschlosseneZahl) != 1) || (ausgeschlosseneZahl <= 0) || (ausgeschlosseneZahl > 50)) {
			printf("Fehler: Bitte eine positive Zahl eingeben!\n");
			while (getchar() != '\n'); 
		}

	} while (ausgeschlosseneZahl <= 0 || ausgeschlosseneZahl > 50);

	printf("Die ausgeschlossene Zahl ist: %d\n", ausgeschlosseneZahl);

	while (getchar() != '\n');

	for (int i = 1; i <= 50; i++) {
		if (i == ausgeschlosseneZahl) {

			printf("Die Zahl %d wird ausgeschlossen.\n", ausgeschlosseneZahl);
			continue; // Überspringt die ausgeschlossene Zahl
		}
		printf("%d \n", i);
	}

	return 0;
}
#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")

int main() {

	system("chcp 1252"); // Setzt die Codepage auf 1252 (Windows-1252) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	int gesamt_zahl = 0;
	printf("Bitte geben Sie Gesamtpunktzahl ein (0-1000)\n");
	scanf("%i", &gesamt_zahl);

	int summ_punkte = 0;
	printf("Bitte geben Sie wie viel punkte haben sie (0-1000)\n");
	scanf("%i", &summ_punkte);

	float prozent = (summ_punkte * 100.0) / gesamt_zahl;

	if (prozent >= 50) {
		printf("Sie haben %.2f%% prozent Sie bestanden!\n", prozent);
	} else {
		printf("Sie haben %.2f%% prozent Sie nicht bestanden.\n", prozent);
	}

    return 0;

}
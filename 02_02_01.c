#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

    int anzahl, zahl, min, max;

		do{
		printf("Wie viele Zahlen möchten Sie eingeben? (1-20)");
		scanf("%d", &anzahl);
		while (getchar() != '\n');
			} while (!(anzahl > 0 &&  anzahl <=20));

		do
		{
		// erstes Zahl einlesen
		printf("Geben Sie Zahl 1 ein (-20 bis 20): ");
		scanf("%d", &zahl);
		while (getchar() != '\n');

			} while (!(zahl >= -20 &&  zahl <=20));
			
		min = zahl;
		max = zahl;

		// Schleife ab der zweiten Zahl
		for (int i = 2; i <= anzahl; i++) {
			printf("Geben Sie Zahl %d ein: ", i);
			scanf("%d", &zahl);

			if (zahl < min) {
				min = zahl;
			}
			if (zahl > max) {
				max = zahl;
			}
		}
	
    printf("Das Minimum ist: %d\n", min);
    printf("Das Maximum ist: %d\n", max);

    return 0;
}
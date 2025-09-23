#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

    int anzahl_Raum = -1;
	float gesamtflaeche = 0;

	do
		{
	printf("Wie viele Raum möchten Sie eingeben? (1-10)");

			if (scanf("%d", &anzahl_Raum) != 1) {
				printf("Fehler: Bitte eine Zahl eingeben!\n");
				while (getchar() != '\n'); // Eingabepuffer leeren
				continue;
			}

		while (getchar() != '\n');

			if (anzahl_Raum <= 0 || anzahl_Raum > 10) {
				printf("Ungueltige Eingabe! Nur Zahlen von 1 bis 10 erlaubt.\n");
			}	

		printf("Sie wohlen %d.\n", anzahl_Raum);

} while (!(anzahl_Raum > 0 &&  anzahl_Raum <=10));

	for(int i = 1; i <= anzahl_Raum; i++) {
		
		float Länge =-1;
		float breite =-1;

			do {
				printf("Geben Sie die Länge von Raum %d ein (in Meter): ", i);

					if ((scanf("%f", &Länge) != 1) || (Länge <= 0)) {
						printf("Fehler: Bitte eine positive Zahl eingeben!\n");
						while (getchar() != '\n'); 
						Länge = -1; // Reset Länge to ensure the loop continues
					}

				} while (!(Länge > 0));

			do {
				printf("Geben Sie die Breite von Raum %d ein (in Meter): ", i);

					if ((scanf("%f", &breite) != 1) || (breite <= 0)) {
						printf("Fehler: Bitte eine positive Zahl eingeben!\n");
						while (getchar() != '\n'); 
						breite = -1; // Reset breite to ensure the loop continues
					}
				} while (!(breite > 0));

		gesamtflaeche += Länge * breite;
		printf("Die Flaeche von Raum %d ist: %.2f Quadratmeter.\n", i, Länge * breite);

	}
	printf("Die Gesamtflaeche aller Raume ist: %.2f Quadratmeter.\n", gesamtflaeche);


    return 0;
}
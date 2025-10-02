// Aufgabe_03_01_04


// Das Programm fragt zu Beginn zwei Floatzahlen (Einzelpreis und Prozentsatz des Rabatts) 
// sowie eine Integerzahl (Stückzahl) ab. Anschließend wird die folgende Funktion gestartet:

// Name: …………… gesamtpreis
// Übergabewerte: … Einzelpreis, Rabatt, Stückzahl
// Funktionalität: …… Ausgabe: „Der Gesamtpreis beläuft sich auf …“
// (Der Platzhalter “…“ wird natürlich mit dem entsprechenden Rechenergebnis gefüllt)

// Mit dem Ende der Funktion endet auch das Programm.



#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

float gesamtpreis (float x, float y, int z);

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	float einzelpreis = 0.0;
	float rabatt = 0.0;
	int stückzahl = 0;

	float result = 0.0;

	printf("Wie viel wird Ihr Produkt kosten? \n");
	scanf("%f", &einzelpreis);
	printf("Welchen Rabatt möchten Sie? \n");
	scanf("%f", &rabatt);
	printf("Wie viele Stück dieses Produkts möchten Sie bestellen? \n");
	scanf("%d", &stückzahl);


	result = gesamtpreis(einzelpreis, rabatt, stückzahl);
	printf("Der Gesamtpreis beläuft sich auf %f \n", result);

	return 0;
}

float gesamtpreis (float x, float y, int z){

	float gesamt_preis = x * z *(1 - y/100);

	return gesamt_preis;

}
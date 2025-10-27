#include <stdio.h>

int main() {


	int grundgebühr = 0; //-	Grundgebühr (in Euro)
	printf("Bitte geben Sie Grundgebeuhr ein (1-100) euro\n");
	scanf("%i", &grundgebühr);

	float anzahl_km = 0; //-	Anzahl der gefahrenen Kilometer und
	printf("Bitte geben Sie die Anzahl der gefahrenen Kilometer ein\n");
	scanf("%f", &anzahl_km);

	float pr_km = 0; //-	Preis pro Kilometer (in Euro) 
	printf("Bitte geben Sie Preis pro Kilometer ein (1-100) euro\n");
	scanf("%f", &pr_km);

	float gesamtpreis = grundgebühr + (anzahl_km * pr_km);
	printf("Der Gesamtpreis der Taxifahrt betreagt: %.2f euro\n", gesamtpreis);

	
    return 0;

}
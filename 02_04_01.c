//02_04_01

// Start.
// Lies min.
// Lies max.
// Lies anzahl.
// Setze Zähler i=0.
// Schleife: Solange i<anzahl:
// Generiere Zufallszahl x im Bereich [min,max].
// Gib x aus.
// Erhöhe i (i++).
// Ende.

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

#include <stdlib.h>  // для rand() и srand()
#include <time.h>    // для time()

int main() {

	system("chcp 65001"); 
	system("cls"); // Löscht die Konsole

	srand(time(NULL)); // Startwert für Zufallszahlen (Seed)

	int min, max, anzahl;

	printf("Geben Sie die minimale Zahl ein (1-100):\n");
	scanf(" %d", &min);
	while (getchar() != '\n'); 

	do{
		printf("Geben Sie die maximale Zahl ein (2-100), größer als die minimale Zahl:\n");
		scanf(" %d", &max);
		while (getchar() != '\n'); 

		if (max <= min)	{
			printf ("Die Zahl %d ist nicht kleiner als die Zahl %d. Geben Sie die Zahl %d erneut ein.\n", max, min, max);
		}

	}while (max <= min);

	printf("Wie oft möchten Sie das wiederholen?\n");
	scanf(" %d", &anzahl);
	while (getchar() != '\n');

	for (int i = 0; i < anzahl; i++)
	{
		int x = min + rand() % (max - min + 1);  // Zufallszahl im Bereich [min, max]
		printf("Wurfzahl %d Ihre Zufallszahl: %d\n", i, x);
	}
	
	return 0;
}
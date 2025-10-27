// Aufgabe_02_04_04


// Das Programm lost zunächst zwei Zahlen zwischen (beiderseits einschließlich) -100 und +100 
// aus. Anschließend wird vom User die Summe der beiden Zahlen abgefragt. Falls er richtig 
// liegt, so erscheint „Glückwunsch“ auf der Konsole und das Programm endet. Falls er sich 
// verrechnete, so wird eine Fehlermeldung und das korrekte Ergebnis ausgegeben und das 
// Programm endet.
#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

#include <stdlib.h>  // для rand() и srand()
#include <time.h>    // для time()

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	srand(time(NULL)); // Startwert für Zufallszahlen (Seed)

	int zufallszahl_1 =  -100 + rand() % 201;
	Sleep(500);
	printf("zufallszahl_1 ist %d\n", zufallszahl_1);

	int zufallszahl_2 = -100 + rand() % 201;
	Sleep(500);
	printf("zufallszahl_2 ist %d\n", zufallszahl_2);

	int korrekte_summe = zufallszahl_1 + zufallszahl_2;

	int benutzer_eingabe = 0;

	printf("Nennen Sie den richtigen Summe: \n");
	scanf("%d", &benutzer_eingabe);
	while (getchar() != '\n'); 
	
	if (benutzer_eingabe == korrekte_summe)	{
		printf("Glückwunsch! \n");
	} else {
		printf("Sie irren sich, der richtige Betrag ist: %d \n", korrekte_summe);
	}

	return 0;
}
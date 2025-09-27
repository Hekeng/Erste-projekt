// Aufgabe_02_04_03

// Das Programm startet mit einer Schleife, die 10-mal durchlaufen wird. Pro Durchlauf soll 
// eine Zufallszahl zwischen (beiderseits einschließlich) 1 und 100 ausgelost und auf der 
// Konsole ausgegeben werden.
// Nach der Schleife soll dann auch das Maximum aller zuvor ermittelten Zufallswerte auf der 
// Konsole erscheinen. Anschließend endet das Programm. 

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

#include <stdlib.h>  // для rand() и srand()
#include <time.h>    // для time()

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole
	srand(time(NULL)); // Startwert für Zufallszahlen (Seed)

	int maximum_wert =0;
	for (int i = 0; i < 10; i++)
	{
		int aktuelle_zufallszahl = 1 + rand() % 100;
		if (aktuelle_zufallszahl >= maximum_wert)	{
			maximum_wert = aktuelle_zufallszahl;
		}
		printf("Iteration # %d, zahl ist %d\n", i, aktuelle_zufallszahl);
		Sleep(50); //задержка в милисекундах
	}
	printf("der Maximalwert aller bisher generierten Zufallszahlen ist %d", maximum_wert);
	return 0;
}
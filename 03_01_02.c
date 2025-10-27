// Aufgabe_03_01_02

// Das Programm startet mit dem Aufruf einer Funktion 
//(Informationen zu dieser: siehe unten). Nachdem die Funktion abgearbeitet wurde, 
//soll im Hauptprogramm der Text „Bären büßen böse Taten mit viel €.“ 
//ausgegeben werden … das Programm endet kopfschüttelnd ;-)

// Zur Funktion:
// Name: …………….. deutscherZeichensatz
// Übergabewerte: ….. keine
// Funktionalität: ……. Wechselt zum deutschen Zeichensatz
// 				Löscht den Bildschirm.	


#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

void deutscherZeichensatz(void);

int main() {

	deutscherZeichensatz();

	printf("Bären büßen böse Taten mit viel €.\n");

	return 0;
}

void deutscherZeichensatz(void){

	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole
	
	return;

}
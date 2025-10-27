// Aufgabe_03_01_03


// Das Programm fragt zu Beginn einen ganzzahligen Wert zwischen 
// (beiderseits einschließlich) 0 und 5 ab und speichert diesen in der Variable x.
//  Anschließend startet die folgende Funktion:

// Name: ………….. bewertung
// Übergabewert: … x
// Funktionalität: …. (falls x=0) Ausgabe:“Kein Kommentar!“
//                              (falls x>0) Ausgabe:“ANSI C ist sehr … toll!“
// 				        (Anzahl des Wortes „sehr“: x) 

// Beispiel:
// Für x=3 wäre die Ausgabe: „ANSI C ist sehr sehr sehr toll!“

// Hinweise:
// -	Versuchen Sie bitte die Aufgabe mit Hilfe einer Schleife zu lösen.
// -	Wie üblich: Kontrolle von Eingabe- (und Übergabewerten) wird nicht verlangt

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

void bewertung (int zahl);

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	int x =0;

	do{
	printf("Bitte geben Sie einen Wert zwischen 0 und 5 ein. \n");
	scanf("%d", &x);
	while (getchar() != '\n');

	}while(x<0 || x >5);

	bewertung (x);

	return 0;
}

void bewertung (int zahl){

	if (zahl == 0) {
		printf("Kein Kommentar! \n");
	} else {         
        
        printf("ANSI C ist ");
        for (int i = 0; i < zahl; i++) {
            printf("sehr "); 
        }
        printf("toll!\n");
    }

	return;
	
}
// Aufgabe Continue


//Schreibe ein C-Programm, das alle Zahlen 
// von 1 bis 50 durchläuft. Wenn eine Zahl durch 5 teilbar ist,
//  überspringe die Ausgabe dieser Zahl und fahre mit der nächsten Zahl fort. .
//  Gib alle anderen Zahlen aus.

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	for (int i = 0; i < 50; i++) {
	    if ((i + 1) % 5 == 0) {
	        continue; // Überspringe die Ausgabe, wenn die Zahl durch 5 teilbar ist
	    }
	    printf("%d\n", i + 1);
	}
	

	return 0;
}

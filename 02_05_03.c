// Aufgabe_02_05_03 

// Das Programm soll ein Float-Array der Länge 30 wie folgt füllen:

// Das erste Element soll mit 1,5 gefüllt werden, das zweite Element mit 2,5 und das dritte Element mit 3,5. 

// Danach wiederholt sich dies für die nächsten drei Elemente, 
//denn das 4. Element soll dann wieder mit 1,5 gefüllt werden, das 5. 
//Element wieder mit 2,5 und das 6. Element entsprechend mit 3,5. 

// Aufgabenstellung: Erstellen Sie bitte zunächst ein entsprechendes Struktogramm und 
// übersetzen Sie dieses bitte erst anschließend in einen geeigneten Quellcode.

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	float werte[30] = {0};
	float wert[3] = {1.5, 2.5, 3.5};


	for (int i = 0; i < 30; i++)
	{
		werte[i] = wert[i % 3];	
		printf("Arr[%d] = %.1f \n", i, werte[i]);
		Sleep(500);
	}

	return 0;
}
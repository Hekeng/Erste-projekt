//A_04_01_01

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") 
#pragma execution_character_set("utf-8")// Für system("chcp 1252") und system("cls") 
#include <stdlib.h> //ВАЖНО!!!!
#include <time.h>

int schreibeZufallszahl(int min, int max); //prototipe

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten // Für system("chcp 1252") und system("cls") 
	system("cls"); // Löscht die Konsole// Für system("chcp 1252") und system("cls") 

	srand(time(NULL)); 

	int zuf_Wurf = schreibeZufallszahl (1,6);

	if (zuf_Wurf > 3) {
		printf("Zufällige Zahl %d ist Überdurchschnittlich!\n", zuf_Wurf);
	} else {

	switch (zuf_Wurf) {
    case 1:
        printf("Zufällige Zahl %d Oh Mann!\n", zuf_Wurf);
        break; 
    case 2:
        printf("Zufällige Zahl %d Naja\n", zuf_Wurf);
        break; 
    case 3:
        printf("Zufällige Zahl %d O.K.\n", zuf_Wurf);
        break;
    default:
        printf("Zufällige Zahl %d Etwas gehen falsch! \n", zuf_Wurf);
        break; 
}
	}

	return 0;
}

int schreibeZufallszahl(int min, int max) {
    int x; 

    if (min > max) {
        int temp = min;
        min = max;
        max = temp;
    }

    x = rand() % (max - min + 1) + min;

    return x; 
}
#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")


#include <stdlib.h>
#include <time.h>

int schreibeZufallszahl(int min, int max);

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	srand(time(NULL)); 

	int antwort = 0;
	int zahlen_richtige_antwort = 0;
	int zahlen_falsche_antwort = 0;

	for (int i = 0; i < 5; i++){

	    int x = schreibeZufallszahl(1,10);
		int y = schreibeZufallszahl(1,10);
		int z = schreibeZufallszahl(1,10);

		int richtige_summa = x + y + z;

		printf("Folgende Zahlen wurden eingegeben: %d, %d, %d. Bitte berechnen Sie den Betrag.\n", x, y, z);

		scanf(" %d", &antwort);
		while (getchar() != '\n');

		if (antwort == richtige_summa){
		    printf("Richtig! \n");
		    zahlen_richtige_antwort++;
		} else {
		    printf("Falsch! Die richtige Antwort ist %d. \n", richtige_summa);
		    zahlen_falsche_antwort++;
		}	

	}

	printf("Sie haben %d richtige Antworten und %d falsche Antworten gegeben. Das ist %f prozentig. \n", zahlen_richtige_antwort, zahlen_falsche_antwort, (float)zahlen_richtige_antwort / (zahlen_richtige_antwort + zahlen_falsche_antwort) * 100.0);

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
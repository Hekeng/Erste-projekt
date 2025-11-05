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

	for (int i = 0; i < 5; i++){
	    int x = schreibeZufallszahl(1,10);
		int y = schreibeZufallszahl(1,10);

		int z = x * y;

		do
		{
		    printf("Was ist %d * %d ? \n", x, y);
		    scanf("%d", &antwort);
			while (getchar() != '\n'); 

		    if (antwort == z){
		        printf("Richtig! \n");
		    } else {
		        printf("Falsch! Versuchen Sie es erneut. \n");
		    }
		} while (z != antwort);
		


	    printf("Produkt zweier Zahlen %d: %d ist gleich %d\n", x, y, z);
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
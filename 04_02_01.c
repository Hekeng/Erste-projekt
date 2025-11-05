#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

#include <stdlib.h>
#include <time.h>


int schreibeZufallszahl(int min, int max);
int ubenrpruffen_zahl (int lotery_zahlen[], int zahl);

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	srand(time(NULL)); 

    int rand_zahl[6] = {0,0,0,0,0,0};

    for (int i = 0; i < 6; i++){

        int neue_zahl = schreibeZufallszahl(1,49);

        while (ubenrpruffen_zahl(rand_zahl, neue_zahl) == 1){

            neue_zahl = schreibeZufallszahl(1,49);
        }

        rand_zahl[i] = neue_zahl;
    }

    printf("Die gezogenen Lottozahlen sind: \n");
    for (int i = 0; i < 6; i++){
        printf("%d ", rand_zahl[i]);
    }


	return 0;
}


int ubenrpruffen_zahl (int lotery_zahlen[], int zahl){

    for (int i = 0; i < 6; i++){

        if (lotery_zahlen[i] == zahl){
            return 1; 
        }
    }
    return 0; // Zahl ist nicht vorhanden
	

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
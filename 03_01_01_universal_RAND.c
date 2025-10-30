#include <stdio.h>
#include <stdlib.h> //ВАЖНО!!!!
#include <time.h>//ВАЖНО!!!!

int schreibeZufallszahl(int min, int max); //prototipe

int main() {

	system("chcp 65001");
	system("cls");

    int minEingabe = 0; 
    int maxEingabe = 0;
    int zufallsErgebnis =0; 

    srand(time(NULL)); //ВАЖНО!!!!

    // Eingabe: min
    printf("Bitte geben Sie den minimalen Wert (min) ein: \n");
    scanf("%d", &minEingabe);

    // Eingabe: max
    printf("Bitte geben Sie den maximalen Wert (max) ein: \n");
    scanf("%d", &maxEingabe);

    zufallsErgebnis = schreibeZufallszahl(minEingabe, maxEingabe);

    // Ausgabe: x
    printf("\nZufällige Zahl (x) zwischen %d und %d: %d\n", 
           minEingabe, maxEingabe, zufallsErgebnis);

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
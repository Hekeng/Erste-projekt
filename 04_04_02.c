// 04_04_02

// // Initialisierung
// GANZZAHL lotto[10][6]
// Zufallsgenerator_initialisieren() // srand(time(NULL))

// // Phase 1: Füllen des Arrays
// FÜR (i = 0; i < 10; i++) // Für jede der 10 Zeilen (Tipps)
//     FÜR (j = 0; j < 6; j++) // Für jede der 6 Zahlen
//         lotto[i][j] = Zufallszahl zwischen 1 und 49

// // Phase 2: Ausgabe des Arrays
// FÜR (i = 0; i < 10; i++)
//     Ausgabe: "Tipp i+1: "
//     FÜR (j = 0; j < 6; j++)
//         Ausgabe: lotto[i][j]
// //     Ausgabe: Tipp i+1 und die 6 Zahlen aus lotto[i]

#include <stdio.h>
#include <windows.h> 
#pragma execution_character_set("utf-8")
#include <stdlib.h>
#include <time.h>

// Константы для читаемости
#define NUM_TIPS 10
#define NUM_NUMBERS 6

int schreibeZufallszahl(int min, int max);

int main() {
    system("chcp 65001"); 
    system("cls"); 

    srand(time(NULL)); 

    int lotto[NUM_TIPS][NUM_NUMBERS];

    printf("\n***********************************\n");
    printf("* 10 Lottotipps:                  *\n");
    printf("***********************************\n");

    for (int i = 0; i < NUM_TIPS; i++) {

        for (int j = 0; j < NUM_NUMBERS; j++) {
            lotto[i][j] = schreibeZufallszahl(1, 49);
        }

        printf("%02d. Tipp: ", i + 1); 

        for (int j = 0; j < NUM_NUMBERS; j++) {
            // %2d гарантирует, что числа < 10 будут иметь пробел для выравнивания
            printf("%2d ", lotto[i][j]); 
        }
        printf("\n"); // Перевод строки для следующего тиража
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
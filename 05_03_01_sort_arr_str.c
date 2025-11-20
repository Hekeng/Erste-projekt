//05_03_01

// // Deklaration
// ARRAY string[5] // Deklaration eines Arrays (der Länge 5)
// GANZZAHL i

// // 1. Eingabeschleife (i=0 bis i<5)
// i = 0
// SOLANGE (i < 5)
//     Eingabe: string[i] // Liest das i-te Element
//     i++
// ENDE SOLANGE

// // 2. Sortierung
// bubblesort(string) // Sortiert das gesamte Array

// // 3. Ausgabeschleife (i=0 bis i<5)
// i = 0
// SOLANGE (i < 5)
//     Ausgabe: string[i] // Gibt das i-te sortierte Element aus
//     i++
// ENDE SOLANGE

// // Ende

#include <stdio.h>
#include <windows.h> 
#pragma execution_character_set("utf-8")
#include <string.h>

void str_eingabe(char arr[][20]);
void str_ausgabe(char arr[][20]);
void bubblesort (char arr[][20]);

int main() {
    system("chcp 65001"); 
    system("cls"); 

    char string[5][20];

    str_eingabe(string);
    str_ausgabe(string);
    bubblesort (string);

    printf("**********!!!!!NUE MASS IST!!!!!**********\n");

    str_ausgabe(string);

    return 0;
} 

void str_eingabe(char arr[][20]){

    for (int i = 0; i < 5; i++) {
        printf("Geben Sie einen ersten Satz ein (max 20 Zeichen):\n");
        scanf(" %20[^\n]", arr[i]); 
        while (getchar() != '\n');
    }
}

void str_ausgabe(char arr[][20]){

    for (int i = 0; i < 5; i++) {
        printf("Str # %d, cointein das str: %s\n", i, arr[i]);
    }
}


void bubblesort (char arr[][20]){

    char bufer[20];

    int N = 5; 

    for (int i = 0; i < N - 1; i++) {

        for (int j = 0; j < N - 1 - i; j++) {

            if (strcmp(arr[j], arr[j+1]) > 0) {

                strcpy(bufer, arr[j]);

                strcpy(arr[j], arr[j+1]);

                strcpy(arr[j+1], bufer);
            }
        }
    }
}
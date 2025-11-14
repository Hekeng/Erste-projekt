// 04_04_04

// // Initialisierung
// GANZZAHL arr[3][6]
// Zufallsgenerator_initialisieren() // srand(time(NULL))

// // Phase 1: Generierung und Speicherung der Zahlen (i: Zeile/Durchlauf)
// FÜR (i = 0; i < 3; i++)
//     GANZZAHL summe = 0

//     // Innerer Zyklus: Generierung der 5 Zahlen (j: Spalte)
//     FÜR (j = 1; j <= 5; j++) // Achtung: Starte bei Index 1
//         arr[i][j] = Zufallszahl zwischen 1 und 10
//         summe = summe + arr[i][j]

//     // Speichere die Summe im Index 0 der aktuellen Zeile
//     arr[i][0] = summe

// // Phase 2: Ausgabe (Optional, aber empfohlen)
// FÜR (i = 0; i < 3; i++)
//     Ausgabe: "Summe des Durchlaufs i+1: " arr[i][0]
//     Ausgabe: " Zahlen: " arr[i][1] bis arr[i][5]

#include <stdio.h>
#include <windows.h> 
#pragma execution_character_set("utf-8")
#include <stdlib.h> 
#include <time.h> 

#define NUM_RUNS 3   
#define NUM_VALUES 5 

// Prototipen
int schreibeZufallszahl(int min, int max);
int summiere_lauf(int *lauf_adresse, int anzahl_werte); 
void gebe_arr_aus(int arr[NUM_RUNS][NUM_VALUES + 1]); 

int main() {
    system("chcp 65001"); 
    system("cls"); 

    srand(time(NULL)); 

    int arr[NUM_RUNS][NUM_VALUES + 1]; 

    printf("\n**************************************************\n");
    printf("* Generierung der Zahlen und Berechnung der Summe *\n");
    printf("**************************************************\n");

    for (int i = 0; i < NUM_RUNS; i++) {
        for (int j = 1; j <= NUM_VALUES; j++) {
            arr[i][j] = schreibeZufallszahl(1, 10);
        }
        
        int summe_lauf = summiere_lauf(arr[i], NUM_VALUES); 
        arr[i][0] = summe_lauf;
    }
    gebe_arr_aus(arr); 
    return 0;
} 

int summiere_lauf(int *lauf_adresse, int anzahl_werte) {
    int summe = 0;
    
    for (int j = 1; j <= anzahl_werte; j++) {
        summe += lauf_adresse[j]; 
    }
    return summe;
}

void gebe_arr_aus(int arr[NUM_RUNS][NUM_VALUES + 1]) {
    printf("\n--------------------------------------------------\n");
    printf("Kontrollausgabe des Arrays arr[3][6]:\n");
    
    for (int i = 0; i < NUM_RUNS; i++) {
        printf("Lauf %d | Summe (%2d) | Zahlen: ", i + 1, arr[i][0]);
        
        for (int j = 1; j <= NUM_VALUES; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
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
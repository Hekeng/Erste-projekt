#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

#include <stdlib.h>  // для rand() и srand()
#include <time.h>    // для time()


int main() {

    
    system("chcp 65001");  // UTF-8 für Umlaute
    system("cls");         // Konsole löschen

    srand(time(NULL));     // Zufallsgenerator initialisieren

    int zahlen[5];         // Array mit 5 Zufallszahlen
    int index = rand() % 5;// zufälliger Index 0..4        
    int gesucht;           // Ausgewählte Zahl

    // Array füllen und ausgeben
    for (int i = 0; i < 5; i++) {
        zahlen[i] = 1 + rand() % 100; // Zufallszahl 1..100
        printf("Z[%d] = %d\n", i, zahlen[i]);
    }

    gesucht = zahlen[index];      // Zahl auswählen

    printf("\nGesucht: %d\n", gesucht);

    return 0;
	
}
//05_05_02

// Strukturdefinition

// STRUKTURTYP ZUFALL
// {
//     ganzzahl vorkomma
//     ganzzahl nachkomma
// }
// Hauptprogramm (Ablauf)

// PROGRAMM Hauptprogramm

//     // Deklaration der Strukturvariablen
//     ZUFALL z

//     // Aufruf der Initialisierungsfunktion
//     rufe initZUFALL(&z)  // Übergabe als Pointer (&)

//     // Ausgabe der Kontrolldaten als Kommazahl (mit 3 Nachkommastellen)
//     Ausgabe(z.vorkomma, ",", z.nachkomma)

// ENDE PROGRAMM

// FUNKTION initZUFALL(ZUFALL *zufall) // Pointer auf ZUFALL

//     // Initialisierung beider Komponenten mit Zufallszahl (0 bis 999)
//     zufall->vorkomma = ZUFALLSZAHL(0, 999)
//     zufall->nachkomma = ZUFALLSZAHL(0, 999)

// ENDE FUNKTION


#include <stdio.h>
#include <windows.h> 
#pragma execution_character_set("utf-8")
#include <stdlib.h> 
#include <time.h> 

// 1. Определение структуры ZUFALL (ГЛОБАЛЬНО)
struct ZUFALL {
    int vorkomma;
    int nachkomma;
};

int schreibeZufallszahl(int min, int max);
void initZUFALL(struct ZUFALL *zufall_ptr); 

int main() {
    system("chcp 65001"); 
    system("cls"); 

    srand(time(NULL)); 
    struct ZUFALL z; 
    
    initZUFALL(&z); 

    printf("Zufallszahl: %d,%03d\n", z.vorkomma, z.nachkomma);
    
    return 0;
} 

// -----------------------------------------------------------
// 4. Реализация функции генерации
// -----------------------------------------------------------
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

// -----------------------------------------------------------
// 5. Реализация функции инициализации (с исправлением имени и синтаксиса)
// -----------------------------------------------------------
void initZUFALL(struct ZUFALL *zufall_ptr) { 

    zufall_ptr->vorkomma = schreibeZufallszahl(0, 999); 
    zufall_ptr->nachkomma = schreibeZufallszahl(0, 999);
	
}
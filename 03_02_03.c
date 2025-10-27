// Aufgabe_03_02_03

// Schreiben Sie bitte zunächst die folgende Funktion:

// Name: ………….... zufall
// Übergabewerte: … 2 Integer a und b
// Funktionalität: ..…. ermittelt einen Zufallswert (zwischen beiderseits einschließlich a und b)
// Rückgabewert: ….. den ermittelten Zufallswert


// Testen Sie die Funktion bitte durch das folgende Hauptprogramm:


// Das Programm startet mit einer Schleife. 

// Im ersten Durchlauf wird mit der obigen Funktion eine Zufallszahl zwischen
//  (beiderseits einschließlich) 1 und 100 ermittelt, der Rückgabewert in 
//  der Variable x abgespeichert und auf der Konsole ausgegeben. 

// In allen anderen Durchläufen wird mittels der Funktion ein Zufallswert zwischen 
// (beiderseits einschließlich) x und 100 ermittelt, erneut in x abgespeichert und ebenfalls ausgegeben.
// Schleife und Programm enden, sobald x den Wert 100 annimmt.


#include <stdio.h>
#include <windows.h> 
#include <stdlib.h> 
#include <time.h> 

int zufall (int a, int b);

int main() {
    // Настройки кодировки и очистки
    system("chcp 65001"); 
    system("cls"); 

    srand(time(NULL)); 

    int x = 0;
    int durchlauf = 0; 

    do {
        durchlauf++;

        if (durchlauf == 1) {

            x = zufall(1, 100);
            printf("1. Durchlauf: Zufallszahl zwischen [1, 100] ist: %d\n", x);
            
        } else {

            x = zufall(x, 100);
            printf("%d. Durchlauf: Zufallszahl zwischen [%d, 100] ist: %d\n", durchlauf, x, x);
        }
        
        Sleep(5); 
        
    } while (x < 100); 

    printf("\nProgrammende: x hat den Wert 100 erreicht!\n");

    return 0;
}

// Определение функции: zufall (Ваша реализация верна)
int zufall (int a, int b){
    int min, max;

    if (a > b){
        min = b;
        max = a;
    } else{
        min = a;
        max = b;
    }

    if (min == max) return min;

    return rand() % (max - min + 1) + min;
}
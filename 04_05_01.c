//04_05_01


// // Initialisierung der globalen Variable
// GANZZAHL global = 1

// // Funktion: Erhöhe die globale Variable um den Wert von x
// FUNKTION erhoeheUmX(x)
//     global = global + x
// ENDE FUNKTION

// // Funktion: Gib den Wert der globalen Variable aus
// FUNKTION output()
//     Ausgabe: global
// ENDE FUNKTION

// // Hauptprogramm (Logik)
// PROGRAMM ML_04_05_01
//     Eingabe: x              // Lese eine Zahl x vom Benutzer
//     erhoeheUmX(x)           // Rufe die Funktion auf, um global zu erhöhen
//     output()                // Gib den neuen Wert von global aus
// ENDE PROGRAMM


#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") 
#pragma execution_character_set("utf-8")// Für system("chcp 1252") und system("cls") 

int global = 1; 

int lese_ganzzahl_nur_typ(void); 
void erhoeheUmX(int x);
void output(void);

int main() {
    system("chcp 65001"); 
    system("cls"); 
    
    printf("--- Programm ML_04_05_01 ---\n");
    printf("Initialwert von 'global' ist: %d\n", global);

    int x; 

    printf("Bitte geben Sie eine ganze Zahl (x) ein: ");
    x = lese_ganzzahl_nur_typ();
    erhoeheUmX(x);
    output();

    return 0;
} 

void erhoeheUmX(int x) {
    global = global + x;
}

void output(void) {
    printf("Ausgabe: Der neue Wert von 'global' ist: %d\n", global);
}

int lese_ganzzahl_nur_typ(void) {
    int zahl, status;

    do {
        status = scanf("%d", &zahl);
        int c;
        while ((c = getchar()) != '\n' && c != EOF); 
        if (status != 1) {
            printf("Fehler: Bitte geben Sie NUR eine ganze Zahl ein.\n");
        }

    } while (status != 1);
    return zahl;
}

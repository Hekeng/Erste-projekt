//05_02_02

// FUNKTION zeichneLinie (GANZZAHL n):

//   // 1. Basisfall (Условие выхода): 
//   WENN n IST KLEINER ODER GLEICH 0:
//     GIB ZURÜCK // BEENDE FUNKTION
  
//   // 2. Rekursiver Schritt:
//   SONST:
//     // A. Aktion ausführen (Напечатать одну звёздочку)
//     AUSGABE '*' 
    
//     // B. Rekursiver Aufruf mit kleinerem Problem
//     rufe zeichneLinie(n - 1)
  
// BEENDE FUNKTION

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

#pragma execution_character_set("utf-8")// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.


int lese_ganzzahl_nur_typ(void);
void zeichneLinie(int zahl);

int main() {

    system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

    system("cls"); // Löscht die Konsole// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
	
    int x = lese_ganzzahl_nur_typ();

    zeichneLinie(x);

    return 0;

}



int lese_ganzzahl_nur_typ(void) {
    int zahl;      

    int status;  

    do {
        printf("Bitte geben Sie eine ganze Zahl ein: ");
        status = scanf("%d", &zahl);
        while (getchar() != '\n');
        if (status != 1) {

            printf("Fehler: Bitte geben Sie NUR eine ganze Zahl ein.\n");
        }
    } while (status != 1);

    return zahl;

}


void zeichneLinie(int n) {

    if (n == 0) {
        return; 
    }

    zeichneLinie(n - 1);

    printf("*");
}

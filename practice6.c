#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int sucheMin(int a, int b);

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	int x = 0; 
    int y = 0; 
    int min = 0; 

    printf("Bitte geben Sie den ersten Wert (x) ein: ");
    if (scanf("%d", &x) != 1) {
        printf("Fehlerhafte Eingabe.\n");
        return 1;
    }

    printf("Bitte geben Sie den zweiten Wert (y) ein: ");
    if (scanf("%d", &y) != 1) {
        printf("Fehlerhafte Eingabe.\n");
        return 1;
    }

    min = sucheMin(x, y);

    printf("\nDer minimale Wert (min) ist: %d\n", min);

    return 0;
}

int sucheMin(int a, int b) {
    
    if (a <= b) {

        return a;
    } else {

        return b;
    }
}
//Aufgabe_04_01_04


//Das Programm fragt zunächst eine ganze Zahl x ab. 
//Falls ein Wert zwischen 1 und 12 eingegeben wurde, so soll der 
//entsprechende Monatsname ausgegeben werden und das Programm endet. 

// Nur falls kein Wert zwischen 1 und 12 eingegeben wurde, 
// kommt es zu einer neuen Abfrage, ob der User ein „Modulo-Fan“ sei. 
// •	Falls der User mit ‘j‘ antwortet, so wird seine Eingabe von x Modulo 12 
// interpretiert und die entsprechende Monatsbezeichnung ausgegeben. Dann endet das Programm.
// •	Falls der User mit ‘n‘ antwortet, so wird „Dann eben nicht“ 
// ausgegeben und das Programm endet.

// Hinweis:
// Achten Sie bitte darauf, dass negative Zahlen auch negative
// Modulo-Werte ergeben (oder den Wert 0 annehmen). 
// In beide Fällen müsste der berechnete Wert entsprechend korrigiert werden.


#include <stdio.h>
#include <stdlib.h> 
#include <ctype.h>   // Для isalpha()
#include <windows.h> // Для system() и chcp
#pragma execution_character_set("utf-8")

// Prototipen
int lese_ganzzahl(void);
char lese_buchstabe(void);
void monatsname(int monat);
int korrigiere_modulo(int x);
void verarbeite_aussnahme(int x);


int main() {

    system("chcp 65001"); 
    system("cls"); 

    printf("--- Monatsbestimmung ---\n");
    int x = lese_ganzzahl();

    if (x >= 1 && x <= 12) {
        printf("\nIhr Monat (%d): ", x);
        monatsname(x);
        return 0; 
    } 
    else {
		verarbeite_aussnahme(x);
    }

    return 0;
}


void monatsname(int monat) {
    switch (monat) {
        case 1:  printf("Januar\n"); break;
        case 2:  printf("Februar\n"); break;
        case 3:  printf("März\n"); break;
        case 4:  printf("April\n"); break;
        case 5:  printf("Mai\n"); break;
        case 6:  printf("Juni\n"); break;
        case 7:  printf("Juli\n"); break;
        case 8:  printf("August\n"); break;
        case 9:  printf("September\n"); break;
        case 10: printf("Oktober\n"); break;
        case 11: printf("November\n"); break;
        case 12: printf("Dezember\n"); break;
        default: printf("Fehler: Ungültiger Monatsindex!\n"); break;
    }
}


int lese_ganzzahl(void) {
    int zahl;
    int status;
    do {
        printf("Bitte geben Sie eine ganze Zahl X ein: ");
        status = scanf("%d", &zahl);
        while (getchar() != '\n'); 
        if (status != 1) {
            printf("Fehler: Bitte geben Sie NUR eine ganze Zahl ein.\n");
        }
    } while (status != 1); 
    return zahl;
}

char lese_buchstabe(void) {
    char zeichen; 
    int status; 
    do {

        status = scanf(" %c", &zeichen); 
        while (getchar() != '\n'); 
        if (status != 1) { 
            printf("Fehler: Ungültige Eingabe! Bitte geben Sie NUR einen Buchstaben ein.\n");
        }
    } while (status != 1); 
    return zeichen;
}

int korrigiere_modulo(int x) {
    int resultat = x % 12;

    if (resultat < 0) {
        resultat += 12;
    }
    if (resultat == 0) {
        return 12;
    }
    return resultat;
}

void verarbeite_aussnahme(int x) {
    printf("\nDer Wert %d liegt außerhalb des Bereichs [1, 12].\n", x);
    printf("Möchten Sie den Wert Modulo 12 interpretieren? (j/n): ");
    char antwort = lese_buchstabe();

    if (antwort == 'j' || antwort == 'J') {
        int monat_index = korrigiere_modulo(x);
        
        printf("\nIhr Wert (%d) Modulo 12 ist korrigiert: %d\n", x, monat_index);
        printf("Der entsprechende Monat ist: ");
        monatsname(monat_index);

    } else if (antwort == 'n' || antwort == 'N') {
        printf("\nDann eben nicht.\n");
        
    } else {
        printf("\nUngültige Antwort. Programmende.\n");
    }
}


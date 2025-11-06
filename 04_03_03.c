#include <stdio.h>
#include <string.h>  // Für strcmp
#include <windows.h> // Für system("chcp 65001")
#pragma execution_character_set("utf-8")

char wort_a[51]; 
char wort_b[51];

// --- Prototypen---
void eingabe_strings(void);             
int pruefe_identisch(void);          
int pruefe_alphabetisch(void);
int pruefe_umgekehrt(void);
int fuehre_pruefungsrunde_durch(void);  

int main() {
    system("chcp 65001");
    system("cls");

    int alle_bedingungen_erfuellt = 0; 
    while (alle_bedingungen_erfuellt != 1) {
        
        alle_bedingungen_erfuellt = fuehre_pruefungsrunde_durch();

        if (alle_bedingungen_erfuellt == 1) {
            printf("\n****************\n");
            printf("Alles O.K.\n");
            printf("****************\n");
            break; // Успешный выход
        } else {
            printf("\n-> Wiederholung der Prüfung notwendig (mindestens eine Bedingung nicht erfüllt).\n");
        }
    }

    return 0;
}

int fuehre_pruefungsrunde_durch(void) {
    int status_paar1 = 0;
    int status_paar2 = 0;
    int status_paar3 = 0;

    printf("\n--- Neue Prüfungsrunde gestartet ---\n");

    // --- 1. ERSTES PAAR: Identische Strings (S1 == S2) ---
    printf("\n[1. Paar] Erwartet: Beide Strings müssen IDENTISCH sein.\n");
    eingabe_strings();
    status_paar1 = pruefe_identisch();
    if (status_paar1 != 1) {
        return 0; // Прерываем, если не удалось
    }

    // --- 2. ZWEITES PAAR: Alphabetische Reihenfolge (S1 <= S2) ---
    printf("\n[2. Paar] Erwartet: S1 muss alphabetisch vor oder gleich S2 liegen (S1 <= S2).\n");
    eingabe_strings();
    status_paar2 = pruefe_alphabetisch();
    if (status_paar2 != 1) {
        return 0; // Прерываем, если не удалось
    }

    // --- 3. DRITTES PAAR: Umgekehrte alphabetische Reihenfolge (S1 >= S2) ---
    printf("\n[3. Paar] Erwartet: S1 muss alphabetisch nach oder gleich S2 liegen (S1 >= S2).\n");
    eingabe_strings();
    status_paar3 = pruefe_umgekehrt();
    
    if (status_paar3 == 1) {
        return 1;
    } else {
        return 0;
    }
}
 // --- input --- 
void eingabe_strings(void) {
    printf("  Erste Zeichenkette (S1): ");
    scanf(" %s", wort_a); 
    while (getchar() != '\n' && getchar() != EOF); 

    printf("  Zweite Zeichenkette (S2): ");
    scanf(" %s", wort_b);
    while (getchar() != '\n' && getchar() != EOF); 
}

// --- uberprufung ---

int pruefe_identisch(void) {
    int vergleich = strcmp(wort_a, wort_b);
    if (vergleich == 0) {
        printf("OK: S1 == S2\n");
        return 1;
    } else {
        printf("FEHLER: S1 und S2 sind NICHT identisch.\n");
        return 0;
    }
}

int pruefe_alphabetisch(void) {
    int vergleich = strcmp(wort_a, wort_b);
    if (vergleich <= 0) {
        printf("OK: S1 <= S2\n");
        return 1;
    } else {
        printf("FEHLER: S1 ist NICHT vor S2.\n");
        return 0;
    }
}

int pruefe_umgekehrt(void) {
    int vergleich = strcmp(wort_a, wort_b);
    if (vergleich >= 0) {
        printf("OK: S1 >= S2\n");
        return 1;
    } else {
        printf("FEHLER: S1 ist NICHT nach S2.\n");
        return 0;
    }
}
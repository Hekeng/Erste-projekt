#include <stdio.h>
#include <string.h>  // Für strcmp
#include <windows.h> // Für system("chcp 65001")
#pragma execution_character_set("utf-8")

char wort_a[51]; 
char wort_b[51];


void eingabe_strings(void);
int pruefe_identisch(void);
int pruefe_alphabetisch(void);
int pruefe_umgekehrt(void);


int main() {
    system("chcp 65001");
    system("cls");

    int alle_bedingungen_erfuellt = 0;

    while (alle_bedingungen_erfuellt != 1) {
        
        int status_paar1 = 0; 
        int status_paar2 = 0; 
        int status_paar3 = 0; 

        printf("--- Neue Prüfungsrunde gestartet ---\n");
        
        printf("\n[1. Paar] Erwartet: Beide Strings müssen IDENTISCH sein.\n");
        eingabe_strings();
        status_paar1 = pruefe_identisch();

        if (status_paar1 == 1) {
            printf("\n[2. Paar] Erwartet: S1 muss alphabetisch vor oder gleich S2 liegen (S1 <= S2).\n");
            eingabe_strings();
            status_paar2 = pruefe_alphabetisch();
        }

        if (status_paar1 == 1 && status_paar2 == 1) {
            printf("\n[3. Paar] Erwartet: S1 muss alphabetisch nach oder gleich S2 liegen (S1 >= S2).\n");
            eingabe_strings();
            status_paar3 = pruefe_umgekehrt();
        }

        if (status_paar1 == 1 && status_paar2 == 1 && status_paar3 == 1) {
             alle_bedingungen_erfuellt = 1; // Успех!
        } else {
             alle_bedingungen_erfuellt = 0; // Неудача, цикл продолжится.
        }
        

        if (alle_bedingungen_erfuellt == 1) {
            printf("\n****************\n");
            printf("Alles O.K.\n");
            printf("****************\n");
            break; // Выход из while(1)
        } else {
            printf("\n-> Wiederholung der Prüfung notwendig (mindestens eine Bedingung nicht erfüllt).\n");
        }
    }

    return 0;
}

// --- Реализация Ввода (Работает с глобальными wort_a и wort_b) ---
void eingabe_strings(void) {
    printf("  Erste Zeichenkette (S1): ");
    scanf(" %s", wort_a); 
    // Очистка буфера
    while (getchar() != '\n'); 

    printf("  Zweite Zeichenkette (S2): ");
    scanf(" %s", wort_b);
    while (getchar() != '\n');  
}

// --- Реализация Проверок (Работает с глобальными wort_a и wort_b) ---

// Проверка 1: Две идентичные строки (S1 == S2)
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

// Проверка 2: Алфавитный порядок (S1 <= S2)
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

// Проверка 3: Обратный алфавитный порядок (S1 >= S2)
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
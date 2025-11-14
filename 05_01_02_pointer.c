
// 05_01_02
//     // 1. Deklaration und Eingabe
//     GANZZAHL a
//     GANZZAHL b
//     Eingabe: a
//     Eingabe: b

//     // 2. Funktionsaufruf (Übergabe der Adressen)
//     tausche(&a, &b) // & symbolisiert die Adresse

//     // 3. Kontrolle und Ausgabe
//     Ausgabe: "Neuer Wert von a: " a
//     Ausgabe: "Neuer Wert von b: " b

// ENDE PROGRAMM

// // Funktion zur Umsetzung des Tauschs
// FUNKTION tausche(POINTER p1, POINTER p2)
//     GANZZAHL temp // Temporäre Variable zum Speichern eines Werts
    
//     // 1. Speichere den Wert von *p1 in temp
//     temp = *p1

//     // 2. Überschreibe den Wert von *p1 mit dem Wert von *p2
//     *p1 = *p2

//     // 3. Überschreibe den Wert von *p2 mit dem temporär gespeicherten Wert
//     *p2 = temp
    
// ENDE FUNKTION

#include <stdio.h>
#include <windows.h> 
#pragma execution_character_set("utf-8")

// Прототипы функций
int lese_ganzzahl_nur_typ(void);
void tausche(int* p1, int* p2); // Имена p1, p2 для соответствия заданию
void ausgabe_variablen(int x, const char* name); // Добавим имя переменной для ясности

// Глобальные переменные удалены, используем локальные в main

int main() {
    system("chcp 65001"); 
    system("cls"); 

    // 1. Локальные переменные (a и b)
    int a = 0;
    int b = 0;
    

    a = lese_ganzzahl_nur_typ();
    b = lese_ganzzahl_nur_typ();

    printf("\n--- VOR dem Tausch ---\n");
    printf("a = %d, b = %d\n", a, b);

    tausche(&a, &b);

    printf("\n--- NACH dem Tausch ---\n");
    

    ausgabe_variablen(a, "a");
    ausgabe_variablen(b, "b");

    return 0;
} 

void tausche(int* p1, int* p2){

    int temp = *p1; 
	*p1 = *p2; 
    *p2 = temp; 
}


int lese_ganzzahl_nur_typ(void) {
    int zahl;
	int status;

    do {
        printf("Bitte geben Sie eine ganze Zahl ein: ");
        status = scanf("%d", &zahl);
        
        int c;
        while ((c = getchar()) != '\n' && c != EOF); 
        
        if (status != 1) {
            printf("Fehler: Bitte geben Sie NUR eine ganze Zahl ein.\n");
        }

    } while (status != 1); 

    return zahl;
}

void ausgabe_variablen(int x, const char* name){
    printf("Der neue Wert von %s ist: %d\n", name, x);
}
// Aufgabe_04_03_04

// Das Programm fragt
// zu Beginn einen String ab. Anschließend wird dieser auf der Konsole ausgegeben,
// allerdings sollen alle Kleinbuchstaben als Großbuchstaben ausgegeben werden und
// alle anderen Zeichen unverändert bleiben.

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

#include <string.h>  

void eingabe_wort(void);
void autput_arr(void);
int ist_lateinisch_und_gueltig (void);
int gros_buchstaben_maschen(void);

char wort[40]; 

int main() {
    system("chcp 65001");
    system("cls");

    int flag_gueltig = 0; //1 = OK, 0 = Fehler

    do { 
        eingabe_wort();
        flag_gueltig = ist_lateinisch_und_gueltig(); 

        if (flag_gueltig == 0) {
             printf("Fehler: Nur lateinische Buchstaben, Zahlen und Leerzeichen sind erlaubt! Bitte erneut eingeben.\n");
        }
        
    } while (flag_gueltig != 1);

    gros_buchstaben_maschen();
    autput_arr();

    return 0;
}

// input
void eingabe_wort(void) {
    printf("Geben Sie ein Wort ein (max 40 Zeichen):\n");
    scanf(" %40s", wort); 

    while (getchar() != '\n'); 
}

//autput
void autput_arr(void){
	printf("Ihren worte ist: %s\n", wort);
}

//Kyrillisches Alphabet prüfen
int ist_lateinisch_und_gueltig (void) {
    // Цикл по строке до нулевого терминатора
    for (int i = 0; wort[i] != '\0'; i++) {
        char symbol = wort[i];
        
        if ( !((symbol >= 'a' && symbol <= 'z') || 
               (symbol >= 'A' && symbol <= 'Z') ||
               (symbol >= '0' && symbol <= '9') ||
               (symbol == ' '))) {
            return 0; 
        }
    }
    return 1;
}

int gros_buchstaben_maschen(void) {

    int laenge = strlen(wort);

    if (laenge < 1) { 
        return 0;
    }

    for (int i = 0; wort[i] != '\0'; i++) {

        char analisierte_buschtabe = wort[i];

        if (analisierte_buschtabe >= 'a' && analisierte_buschtabe <= 'z') {
            analisierte_buschtabe -= 32;
            wort[i]=analisierte_buschtabe;
        }
    }
    return 1;
}
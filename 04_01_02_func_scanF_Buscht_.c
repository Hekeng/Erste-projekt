//Aufgabe_04_01_02

#include <stdio.h>
#include <windows.h> 
#pragma execution_character_set("utf-8")
#include <ctype.h> // ВАЖНО!!! Для функции isalpha()

char lese_buchstabe(void); //Prototyp

int main() {
	system("chcp 65001"); 
	system("cls"); 

	char zeichen1 = lese_buchstabe();
	char zeichen2 = lese_buchstabe();

	if (zeichen1 == 'Q' && zeichen2 != 'Q'){
        printf("Fall 1! \n");
        } else if(zeichen1 != 'Q' && zeichen2 == 'Q'){
            printf("Fall 2! \n");
                }else {
                    printf("Fall 3! \n");
    }

	return 0;
}


char lese_buchstabe(void) {
    char zeichen; 
    int status; 

    do {
        printf("Bitte geben Sie einen Buchstaben (A-Z) ein: ");
        status = scanf(" %c", &zeichen);
        while (getchar() != '\n'); 

        if (status != 1 || !isalpha(zeichen)) {
            printf("Fehler: Ungültige Eingabe! Bitte geben Sie NUR einen Buchstaben ein.\n");
        }
    } while (status != 1 || !isalpha(zeichen)); 
	
    return zeichen;
}
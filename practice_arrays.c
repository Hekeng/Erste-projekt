    
	
#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {

	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	// int userZahl[10];  // array 
    // int i;

  	// // Eingabe-Teil (ввод)
    // i = 0;
    // while (i < 10) {

    //     printf("Bitte Zahl %d eingeben: ", i + 1);
    //     scanf("%d", &userZahl[i]);
    //     i++;

    // }

    // // Ausgabe-Teil (вывод)
    // i = 0;
    // while (i < 10) {
    //     printf("Zahl %d ist: %d\n", i + 1, userZahl[i]);
    //     Sleep(250);
    //     i++;
    // }



    int i;
    int userZahl[10];

    for(i=0;i<10;i++)
    {
        printf("Geben Sie bitte eine ganze Zahl ein:");
        fflush(stdin);
        scanf("%d", &userZahl[i]);
    }

    for(i=0;i<10;i++)
    {
        printf("Wert des Feldes mit Index %d: %d\n", i, userZahl[i]);
    }


	return 0;
}
	
	
	
	
	

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
#pragma execution_character_set("utf-8")// 



int main() {
    system("chcp 65001"); 
    system("cls"); 
    
    // 1. Инициализация массива (arr[0]=1, arr[1]=2, arr[2]=3)
    int arr[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    
    int x;

    printf("--- Programm ST_04_02 (Schreibtischtest) ---\n");
    printf("Bitte geben Sie eine ganze Zahl (x) ein.\n");


    do {
        printf("Ihre Eingabe: ");
        
        if (scanf("%d", &x) != 1) {
            printf("Fehler: Ungültiger Eingabetyp. Bitte nur ganze Zahlen eingeben.\n");

            int c;
            while ((c = getchar()) != '\n' && c != EOF); 
            x = -1; 
        } else {
            
            int c;
            while ((c = getchar()) != '\n' && c != EOF); 
        }
        
    } while (x < 0); 

    printf("\n--- Ausgabe ---\n");
    
    if (x < 3) { // wenn(x<3)
        
        if (x >= 0 && x <= 2) { 
        
             printf("Ausgabe: %d\n", arr[x]);
        } else {
        
             printf("Ausgabe: Index außerhalb des gültigen Bereichs [0, 2].\n");
        }
    } else { 
        printf("Ausgabe: grrrrmmmpffff\n");
    }

    return 0;
}
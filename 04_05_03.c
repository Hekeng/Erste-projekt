#include <stdio.h>
#include <windows.h> 
#pragma execution_character_set("utf-8")
#include <stdlib.h>
#include <time.h>

void zufall (void); 

int x = 0;

int main() {
    system("chcp 65001"); 
    system("cls"); 
    srand(time(NULL)); 

    for (int i = 0; i < 5; i++) {
        zufall(); 
        printf("Durchlauf %d: Der Wert von x ist jetzt %d\n", i + 1, x);
		Sleep(50); //задержка в милисекундах
    }

    printf("\nProgramm beendet.\n");
    return 0;
} 

void zufall (void) {
    int min = 1;
    int max = 10;

    x = rand() % (max - min + 1) + min;
}
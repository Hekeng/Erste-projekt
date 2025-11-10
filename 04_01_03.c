#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
#pragma execution_character_set("utf-8")

int lese_prozentsatz(void);
void analise (int proz); 

int main() {
    system("chcp 65001"); 
    system("cls"); 

    // Шаг 1: Получение процента от пользователя
    int prozent_wert = lese_prozentsatz();

	

    printf("\nIhr Prozentsatz: %d\n", prozent_wert);
    printf("Ihre Schulnote: ");

	analise(prozent_wert);
    // Шаг 2: Определение оценки с помощью IHK-Notenschlüssel
    // Проверяем от большего к меньшему, что более эффективно,
    // так как не нужно использовать оператор &&.


    return 0;
}

int lese_prozentsatz(void) {
    int prozent;
    int status;
    do {
        printf("Bitte geben Sie einen Prozentsatz (0 bis 100) ein: ");
        status = scanf("%d", &prozent);
        while (getchar() != '\n'); 
        if (status != 1 || prozent < 0 || prozent > 100) {
            printf("FEHLER: Bitte geben Sie eine Zahl zwischen 0 und 100 ein.\n");
        }
        
    } while (status != 1 || prozent < 0 || prozent > 100); 

    return prozent;
}

void analise (int proz){
	if (proz >= 92) {
        printf("„sehr gut“\n");
    } 
    else if (proz >= 81) {
        printf("„gut“\n");
    } 
    else if (proz >= 67) {
        printf("„befriedigend“\n");
    } 
    else if (proz >= 50) {
        printf("„ausreichend“\n");
    } 
    else if (proz >= 30) {
        printf("„mangelhaft“\n");
    } 
    else {
        printf("„ungenügend“\n");
    }
}
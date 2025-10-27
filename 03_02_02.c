
#include <stdio.h>
#include <stdlib.h>
#pragma execution_character_set("utf-8")

// Прототип: Функция возвращает float и принимает float (основание) и int (показатель)
float x_hoch_n(float x, int n);

int main() {
	system("chcp 65001");
    system("cls");

    float x = 0.0; 
    int n = 0;
    float ergebnis = 0.0; 
    
    printf("Bitte geben Sie die Float-Zahl (Basis x) ein: ");
    scanf("%f", &x);

    printf("Bitte geben Sie den Integer (Exponent n) ein: ");
    scanf("%d", &n);

    ergebnis = x_hoch_n(x, n);

    printf("\nDas Ergebnis (%.2f hoch %d) ist: %.2f\n", x, n, ergebnis);

    return 0;
}


float x_hoch_n(float x, int n) {

    float ergebnis = 1.0;
    for (int i = 0; i < n; i++) {
        ergebnis = ergebnis * x; 
    }

    return ergebnis;
}
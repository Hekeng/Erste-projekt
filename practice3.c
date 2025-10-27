#include <stdio.h>

int main() {
    int benutzerZahl;

    do {
        printf("Bitte geben Sie eine ganze Zahl kleiner als 10 ein: ");
        scanf("%d", &benutzerZahl);
    } while (benutzerZahl >= 10);

    printf("Gluckwunsch!\n");

    return 0;
}
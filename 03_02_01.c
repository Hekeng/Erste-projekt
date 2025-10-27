#include <stdio.h>
#include <stdlib.h> 

float prozentsatz(float g, float pw);


int main() {

    system("chcp 65001"); 
    system("cls");

	float grundwert = 0.0;     
    float prozentwert = 0.0;  
    float p = 0.0;             

    printf("Bitte geben Sie den Grundwert (100%%) ein: \n");
    scanf("%f", &grundwert);

    printf("Bitte geben Sie den Wert ein, dessen Prozentanteil Sie berechnen möchten: \n");
    scanf("%f", &prozentwert);

    if (grundwert != 0.0) {
        p = prozentsatz(grundwert, prozentwert);
        
        printf("\nDas Ergebnis (p) ist: %.2f (%%)\n", p);
    } else {
        printf("\nFehler: Der Grundwert darf nicht Null sein. Die Berechnung ist nicht möglich.\n");
    }

    return 0;
}

float prozentsatz(float g, float pw) {
    float p;
    p = (pw / g) * 100;
    return p;
}
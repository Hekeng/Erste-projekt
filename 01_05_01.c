#include <stdio.h>

int main() {
	
    float startKapital, zielkapital, prozentsatz, aktuelleskapital;

    int jahr;

    printf("Bitte geben Sie Ihren Startkapital ein:\n");
    scanf("%f", &startKapital);
    
    printf("Bitte geben Sie Ihr Zielkapital ein:\n");
    scanf("%f", &zielkapital);
    
    printf("Bitte geben Sie den jaehrlichen Zinssatz (in Prozent) ein:\n");
    scanf("%f", &prozentsatz);
    
    aktuelleskapital = startKapital;
    jahr = 0;
    
    while (aktuelleskapital < zielkapital) {
        aktuelleskapital = aktuelleskapital * (1 + prozentsatz / 100);
        jahr = jahr + 1;
    }
    
    printf("Nach %d Jahren betraegt Ihr Kapital %.2f Euro\n", jahr, aktuelleskapital);
    
    return 0;
}

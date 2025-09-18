#include <stdio.h>

int main() {
	
    float ersteZahl, zweiteZahl, ergebnis;

    printf("Geben Sie die erste Zahl ein (x):\n");
    while (scanf("%f", &ersteZahl) != 1) {
        printf("Ungueltige Eingabe. Bitte eine Zahl eingeben:\n");
        while (getchar() != '\n'); // Eingabepuffer leeren
    }

    printf("Geben Sie die zweite Zahl ein (y):\n");
    while (1) {
        if (scanf("%f", &zweiteZahl) != 1) {
            printf("Ungueltige Eingabe. Bitte eine Zahl eingeben:\n");
            while (getchar() != '\n');
            continue;
        }
        if (zweiteZahl == 0) {
            printf("Durch 0 teilen ist nicht zulässig. Bitte erneut eingeben:\n");
        } else {
            break; // gültiger Wert
        }
    }

    ergebnis = ersteZahl / zweiteZahl;
    printf("Der Quotient ist: %.2f\n", ergebnis);

    return 0;
}
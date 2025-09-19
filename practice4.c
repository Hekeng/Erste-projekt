#include <stdio.h>

int main() {
    int wahl = -1;
    float gesamtsumme = 0;

    while (wahl != 0) {

        printf("\n--- Menu ---\n");
        printf("1 - Cheeseburger (3.50 €)\n");
        printf("2 - Big Mac (5.00 €)\n");
        printf("3 - Veggie Burger (4.00 €)\n");
        printf("4 - Cola (1.00 €)\n");
        printf("5 - Shake (2.00 €)\n");
        printf("0 - Bestellung beenden\n");

		scanf("%d", &wahl);


		while (!(wahl == 0 || wahl == 1 || wahl == 2 || wahl == 3 || wahl == 4 || wahl == 5)) {
			printf("Ungultige Eingabe! Nur Zahlen (0, 1, 2, 3, 4, 5) erlaubt.\n");
			wahl = -1;
			while (getchar() != '\n');
			scanf("%d", &wahl);
			
		}

        if (wahl == 1) {
            gesamtsumme += 3.50;
        } else if (wahl == 2) {
            gesamtsumme += 5.00;
        } else if (wahl == 3) {
            gesamtsumme += 4.00;
        } else if (wahl == 4) {
            gesamtsumme += 1.00;
        } else if (wahl == 5) {
            gesamtsumme += 2.00;
        } else if (wahl != 0) {
            printf("Bestellung beenden\n");
        }
    }

    printf("\nGesamtsumme: %.2f €\n", gesamtsumme);
    printf("Bestellung beendet.\n");
    return 0;
}
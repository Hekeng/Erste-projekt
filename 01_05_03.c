#include <stdio.h>

int main() {

	
	char antwort = 'j';

	while (antwort == 'j')
	{
		float ersteZahl, zweiteZahl, result;

			printf("Geben Sie die erste Zahl ein:\n");
			while (scanf(" %f", &ersteZahl) != 1) {
				printf("Bitte nur Zahlen eingeben!\n");
				while (getchar() != '\n'); 
			}

			printf("Geben Sie die zweite Zahl ein:\n");
			while (scanf(" %f", &zweiteZahl) != 1) {
				printf("Bitte nur Zahlen eingeben!\n");
				while (getchar() != '\n');
			}

			result = ersteZahl * zweiteZahl;
			printf("Das Ergebnis ist: %.2f\n", result);

			printf("Moechten Sie eine weitere Berechnung durchfuehren? (j/n):\n");
			scanf(" %c", &antwort);

		while (antwort != 'j' && antwort != 'n')
		{
			printf("Falsche eingabe, bitte nur 'j' oder 'n' eingeben\n");
			scanf(" %c", &antwort);
		}
		
	}

	printf("Dann eben nicht mehr\n");

	return 0;
}
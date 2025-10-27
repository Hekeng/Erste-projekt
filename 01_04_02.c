#include <stdio.h>

int main() {

	float cost = 0;0; //-	Preis eines Tickets
	printf("Bitte geben Sie den Preis eines Tickets ein (0.0-100.0)\n");
	scanf("%f", &cost);

	int ticket = 0; //-	Anzahl der Tickets
	printf("Bitte geben Sie die Anzahl der Tickets ein (1-100)\n");
	scanf("%i", &ticket);

	float result = cost * ticket; //-	Ergebnis (Gesamtpreis)
	if (ticket > 5)
	{
		result = result * 0.9;
	}
	printf("Der Gesamtpreis betraegt: %.2f Euro\n", result);
    return 0;

}
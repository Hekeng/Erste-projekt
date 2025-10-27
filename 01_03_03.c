#include <stdio.h>


int main() {


	int tag = 0;
	printf("Bitte geben Sie tag ein (1-31)");
	scanf("%i", &tag);

	int monat = 0;
	printf("Bitte geben Sie monat ein (1-12)");
	scanf("%i", &monat);

	int jahr = 0;
	printf("Bitte geben Sie jahr ein (1900-2100)");
	scanf("%i", &jahr);

	printf("Deutsche Datumsdarstellung:........ %.2d.%.2d.%d\n", tag, monat, jahr);
	printf("Amerikanische Datumsdarstellung:... %d-%.2d-%.2d\n", jahr, monat, tag);

    return 0;

}
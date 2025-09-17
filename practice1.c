#include <stdio.h>

int main() {

	int akt_jahr = 0; //-	aktuelles Jahr (1900-2100)
	printf("Bitte geben Sie aktuelles Jahr ein (1900-2100) jahr\n");
	scanf("%i", &akt_jahr);

	int geb_jahr = 0; //-	Geburtsjahr
	printf("Bitte geben Sie die Geburtsjahr ein\n");
	scanf("%i", &geb_jahr);

	char antwort = 0; //-	antwort auf die Frage, ob der Nutzer Student ist (j/n)
	printf("Sind Sie Student? (j/n)\n");
	scanf(" %c", &antwort);
	
	int result = 0; //-	Ergebnis (Alter in Jahren, ggf. als Kommazahl)
	if (antwort == 'j') {
		result = (akt_jahr - geb_jahr);
	} else {
		result = (akt_jahr - geb_jahr)-1;
	}

	printf("Ihr Alter betraegt: %i jahre\n", result);

    return 0;

}
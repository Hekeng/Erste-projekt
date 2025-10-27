#include <stdio.h>

int main() {
	
    //float startKapital;

    char symb, wahl;
    int mal_ziten = 0;

	printf("Geben Sie eine tastatur symbol ein (Ende mit Enter):\n");
	scanf(" %c", &symb);

	printf("Geben Sie ein wie oft das symbol wiederholt werden soll (1-100):\n");
	scanf(" %d", &mal_ziten);

	printf("Sie haben das Symbol '%c' %d mal wiederholt.\n", symb, mal_ziten);

	printf("wie man horizontal oder vertikal anordnet (h/v) \n");
	scanf(" %c", &wahl);

	while (wahl != 'h' && wahl !='v') {
		printf("Falsche eingabe, bitte nur 'h' oder 'v' eingeben\n");
		scanf(" %c", &wahl);

	}

	if (wahl == 'h') {
		for (int i = 0; i < mal_ziten; i++) {
			printf("%c mal %i", symb, i);
	} } else {
		for (int i = 0; i < mal_ziten; i++) {
			printf("%c mal %i\n", symb, i);
		}
	}
	    return 0;
}
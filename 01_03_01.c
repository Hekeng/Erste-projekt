#include <stdio.h>


int main() {


float laenge = 0;
float breite = 0;

char character = 228;

printf("Bitte geben Sie die Laenge des Rechtecks ein %c (Lngen>0)\n", character);
scanf("%f", &laenge);

printf( "Bitte geben Sie die Breite des Rechtecks ein (Breite>0)\n" );
scanf("%f", &breite);

if (laenge >= 0 && breite >= 0) {
	float flaeche = laenge * breite;
	printf("Die Fläche des Rechtecks beträgt: %.2f\n", flaeche);
} else {
	printf("Laenge und Breite muessen ungleich Null sein.\n");
}
    return 0;
} 
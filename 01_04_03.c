#include <stdio.h>

#include <windows.h> // Für system("chcp 1252") und system("cls")

int main() {

	system("chcp 1252"); // Setzt die Codepage auf 1252 (Windows-1252) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	char buchstabe1 = ' '; //-	Alter des Nutzers (in Jahren)
	printf("Bitte geben Sie buchstabe #1 ein (a-z)\n");
	scanf(" %c", &buchstabe1);

	char buchstabe2 = ' '; //-	Alter des Nutzers (in Jahren)
	printf("Bitte geben Sie buchstabe #2 ein (a-z)\n");
	scanf(" %c", &buchstabe2);

	char antwort = ' '; //-	Alter des Nutzers (in Jahren)
	printf("Auswahl 1 (y): Die beiden Buchstaben werden nebeneinander auf der Konsole ausgegeben Auswahl 2 (n) : Die beiden Buchstaben werden übereinander auf der Konsole ausgegeben (y/n)\n");
	scanf(" %c", &antwort);

	if (antwort == 'y') {
		printf("\n%c %c\n", buchstabe1, buchstabe2);
	} else {
		printf("\n%c\n%c\n", buchstabe1, buchstabe2);
	}
fflush(stdin);
    return 0;

}
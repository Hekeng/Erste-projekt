#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {

	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

char antwort;

do {
    printf("Hallo!\n");

    do {
        printf("Wollen Sie, dass ein weiteres mal Hallo ausgegeben wird? (j/n): ");
        scanf(" %c", &antwort);   // пробел перед %c убирает \n
        
        if (antwort != 'j' && antwort != 'n') {
            printf("Fehler: Bitte eine gültige Eingabe tätigen (j/n)!\n");
        }

    } while (antwort != 'j' && antwort != 'n');  

} while (antwort == 'j');

	printf("Dann gibt es eben keine weitere Begrüßung mehr ... und tschööö! \n");

	return 0;

}

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
#pragma execution_character_set("utf-8")// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

int lese_ganzzahl_nur_typ(void);//prototipe

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
	system("cls"); // Löscht die Konsole// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

	int jahr = lese_ganzzahl_nur_typ();

	if (jahr % 400 == 0) {
		printf("Das Jahr ist ein Schaltjahr.\n");
		} else if (jahr % 100 == 0) {
			printf("Das Jahr ist KEIN Schaltjahr.\n");
				} else if (jahr % 4 == 0) {
					printf("Das Jahr ist ein Schaltjahr.\n");
						} else {
							printf("Das Jahr ist KEIN Schaltjahr.\n");
	}

	return 0;
}

int lese_ganzzahl_nur_typ(void) {
    int zahl;      
    int status;   

    do {
        printf("Bitte geben Sie eine ganze Zahl ein: ");
        status = scanf("%d", &zahl);
        while (getchar() != '\n'); 
        if (status != 1) {
            printf("Fehler: Bitte geben Sie NUR eine ganze Zahl ein.\n");
        }

    } while (status != 1); 

    return zahl;
}
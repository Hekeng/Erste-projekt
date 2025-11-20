//05_05_01

// FUNKTION inputINT(text, x)

//     // Ausgabe des Aufforderungstextes
//     Ausgabe(text)

//     // Einlesen der Benutzereingabe in die Variable x
//     Eingabe(x)

// ENDE FUNKTION

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
#pragma execution_character_set("utf-8")// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

int lese_ganzzahl_nur_typ(void);

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
	system("cls"); // Löscht die Konsole// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
	
	int ergebnis = lese_ganzzahl_nur_typ();

	printf("\nSie haben erfolgreich die Zahl %d eingegeben.\n", ergebnis);

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
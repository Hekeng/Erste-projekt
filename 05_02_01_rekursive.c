// FUNKTION dezimal_nach_binaer (GANZZAHL dezimal):

//   WENN dezimal IST GRÖẞER ALS 1:
//     // Rekursiver Aufruf mit Ganzzahl-Division
//     rufe dezimal_nach_binaer(dezimal / 2)
  
//   // Ausgabe des Rests (nachdem alle rekursiven Aufrufe abgeschlossen sind)
//   AUSGABE (dezimal MODULO 2)
  
// BEENDE FUNKTION

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

#pragma execution_character_set("utf-8")// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.


int lese_ganzzahl_nur_typ(void);
void dezimal_nach_binaer(int dezimal);

int main() {

    system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

    system("cls"); // Löscht die Konsole// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
	
    int x = lese_ganzzahl_nur_typ();
    dezimal_nach_binaer(x);

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



void dezimal_nach_binaer(int dezimal) {

    if (dezimal > 1) {
        dezimal_nach_binaer(dezimal / 2);
    }
    printf("%d", dezimal % 2);

}

// Aufgabe_02_01_04


// Das Programm startet mit einer Schleife, in der pro Durchlauf die aktuelle Anzahl der bisherigen Durchläufe abgefragt wird. Die Schleife wird solange wiederholt, solange der User einen falschen Wert eingibt.
// Bei einer korrekten Eingabe endet die Schleife. Nach der Schleife wird ausgegeben, wie viele Schleifendurchläufe es insgesamt gab. Anschließend endet das Programm. 

// Erläuterung:
// Die korrekte Eingabe während des ersten Durchlaufes ist also „0“, denn bisher hatte es noch keinen einzigen Durchlauf gegeben. Entsprechend gilt allgemein: Während des n-ten Durchlaufs ist die korrekte Eingabe n-1.



#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	int durchlaeufe;
	int zaehler = 0;

while (1) {
    printf("Geben Sie die Anzahl der bisherigen Durchläufe ein: ");

    if (scanf("%d", &durchlaeufe) != 1 || durchlaeufe < 0) {
        printf("Fehler: Bitte eine Zahl eingeben!\n");
        while (getchar() != '\n'); // Eingabepuffer leeren
		zaehler++;
        continue; // zurück zum Schleifenanfang
    }

    if (durchlaeufe == zaehler) {
        printf("Korrekte Eingabe! Die Schleife wird beendet.\n");
        break;
    } else {
        printf("Falsche Eingabe. Bitte versuchen Sie es erneut.\n");
        zaehler++;
    }

} ;

return 0;
}
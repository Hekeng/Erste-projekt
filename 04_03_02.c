// PROGRAMM_04_03_02
//     Deklariere Zeichenkette wort[21]
//     Deklariere Zeichen c1, c2 // Für den ersten und letzten Buchstaben

//     SCHLEIFE_WIEDERHOLEN:
//         Ausgabe: "Geben Sie ein Wort ein (max 20 Zeichen):"
//         Eingabe: wort

//         // 1. Finde die Positionen
//         Laenge = Länge(wort)
//         c1 = wort[0]            // Erster Buchstabe
//         c2 = wort[Laenge - 1]   // Letzter Buchstabe

//         // 2. Normalisiere die Buchstaben zur Klein- oder Großschreibung
//         //    (Zum Beispiel: Konvertiere c1 und c2 in Kleinbuchstaben)
//         normalisiert_c1 = Konvertiere_zu_Klein(c1)
//         normalisiert_c2 = Konvertiere_zu_Klein(c2)

//         // 3. Überprüfe die Bedingung
//         WENN (normalisiert_c1 == normalisiert_c2) DANN
//             Ausgabe: "wunderbar!"
//             BRICH_AB // Beendet die Schleife
//         SONST
//             // Gehe zur nächsten Eingabe über
//             WIEDERHOLE_SCHLEIFE
//         ENDE WENN
//     ENDE SCHLEIFE

// ENDE PROGRAMM


#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

void eigabe_worte ();//prototipe
int polydrompruefung(void);
char wort[20];

int main() {

	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole


	
	eigabe_worte();


	printf("%s \n", wort);
	return 0;
}

void eigabe_worte (){


	printf("Geben Sie einen ersten wort ein (max 20 Zeichen):\n");
	scanf(" %20s", wort);
	while (getchar() != '\n');


}

int polydromprüfung(void){

	int arr_lang = strlen(wort);

	printf("%d \n", arr_lang);


}

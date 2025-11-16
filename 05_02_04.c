//05_02_04

// FUNKTION kopiere (ZEIGER_AUF_CHAR arr, ZEIGER_AUF_CHAR brr):

//   // 1. Aktion ausführen: Kopiere den aktuellen Buchstaben
//   // Setze den Wert von *arr gleich dem Wert von *brr
//   SETZE *arr GLEICH *brr
  
//   // 2. Basisfall und Rekursiver Schritt:
//   // WENN das kopierte Zeichen NICHT der Null-Terminator ('\0') ist:
//   WENN *brr IST NICHT GLEICH '\0':
    
//     // Rekursiver Aufruf mit kleinerem Problem:
//     // Verschiebe beide Zeiger um eine Position nach rechts
//     rufe kopiere(arr + 1, brr + 1)
  
//   // SONST: (Wenn *brr gleich '\0' war, stoppt die Rekursion hier.)
  
// BEENDE FUNKTION

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
#pragma execution_character_set("utf-8")// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

void kopiere (char *arr, char *brr);

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
	system("cls"); // Löscht die Konsole// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

		char brr[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna.";

		char arr[100];

		kopiere (arr, brr);

		for (int i = 0; arr[i] != '\0'; i++) {

        printf("%c", arr[i]);
    }
    

	return 0;
} 


void kopiere (char *arr, char *brr) {
    
    *arr = *brr; 

    if (*brr != '\0') {

        kopiere(arr + 1, brr + 1);
    }
    
}
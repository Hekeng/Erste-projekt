//05_05_03

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
#pragma execution_character_set("utf-8")// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

typedef struct {
    char text[50];
    int laenge;
} WORT;


int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
	system("cls"); // Löscht die Konsole// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

	WORT woerter[3];


	return 0;
} 

void inputwort (void){
	
	printf("Geben Sie einen ersten Satz ein (max 100 Zeichen):\n");
	scanf(" %100[^\n]", s1);
	while (getchar() != '\n');
}
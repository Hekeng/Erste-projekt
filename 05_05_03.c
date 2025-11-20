//05_05_03

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
#pragma execution_character_set("utf-8")// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

typedef struct {
    char text[50];
    int laenge;
} WORT;

void inputwort(struct WORT *ptr);

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
	system("cls"); // Löscht die Konsole// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

	WORT woerter[3];


	return 0;
} 

void inputwort(struct WORT *ptr) { 

    printf("Geben Sie ein Wort ein (max 99 Zeichen):\n");

    // 💡 1. Используем ptr->text для обращения к полю структуры.
    // 💡 2. Убран лишний пробел перед % для корректного считывания строки.
    scanf("%50[^\n]", ptr->text); 

    // 💡 3. Очистка буфера, предотвращающая проблемы при следующем вводе.
    while (getchar() != '\n'); 
}
// Programm_04_03_01
//     Deklariere Zeichenkette s1[101], s2[101], s3[101]

//     Ausgabe: "Geben Sie einen ersten Satz ein (max 100 Zeichen)"
//     Eingabe: s1

//     Ausgabe: "Geben Sie einen zweiten Satz ein (max 100 Zeichen)"
//     Eingabe: s2

//     wenn (Länge(s1) + Länge(s2) < 101) dann
//         s3 = s1       // Zuweisung
//         s3 = s3 + s2  // Konkatenierung (s2 an s3 anhängen)
//         Ausgabe: s3
//     sonst
//         Ausgabe: "Text zu lang"
//     ende wenn
// Ende Programm



#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	char s1[101], s2[101], s3[201];

	printf("Geben Sie einen ersten Satz ein (max 100 Zeichen):\n");
	scanf(" %100[^\n]", s1);
	while (getchar() != '\n');

	printf("Geben Sie einen zweiten Satz ein (max 100 Zeichen):\n");
	scanf(" %100[^\n]", s2);
	while (getchar() != '\n');


	if (strlen(s1) + strlen(s2) < 101) {
		strcpy(s3, s1);
		strcat(s3, s2);
		printf("Kombinierter Satz: %s\n", s3);
	} else {
		printf("Text zu lang\n");
	}

	return 0;
}
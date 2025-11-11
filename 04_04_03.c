// 04_04_03

// 🇷🇺 Перевод Задания: Aufgabe_04_04_03 программа сначала запрашивает 5 строк 
// (максимум 20 символов) и сохраняет их в массиве wort[5][21].Затем программа запрашивает 
// у пользователя число $x$ от 1 до 5 (ввод должен быть повторен, если он недопустим).
// Как только числовой ввод корректен, выводится $x$-я строка.Примечание:Следует учесть, 
// что пользователь считает строки, как обычно, от 1 до 5, в то время как внутренне они 
// сохраняются с индексами от 0 до 4

// // Initialisierung
// ZEICHENKETTE wort[5][21]

// // 1. Strings einlesen
// FÜR (i = 0; i < 5; i++)
//     Eingabe: wort[i]

// // 2. Zahl x mit Gültigkeitsprüfung einlesen (Wiederholung bei Fehlern)
// WIEDERHOLE
//     Eingabe: x
// SOLANGE (x < 1 ODER x > 5)

// // 3. Ausgabe
// // Der Index ist x-1, da der User von 1 zählt (0 bis 4)
// Ausgabe: wort[x - 1]

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
#pragma execution_character_set("utf-8")// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

void eingabe_strings(int x, char *ziel_adresse);
int lese_ganzzahl_nur_typ(void);
void ausgabe_str (int x, char *ziel_adresse);

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
	system("cls"); // Löscht die Konsole// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

	char wort[5][21];
	int x = 0;

	for (int i = 0; i < 5; i++) {
		eingabe_strings(i+1, wort[i]);
	}

	x = lese_ganzzahl_nur_typ();

	ausgabe_str (x, wort[x -1]);
	return 0;
} 

void eingabe_strings(int x, char *ziel_adresse) {
    printf("Schreiben Sie bitte Wort #%d : ", x);
    scanf(" %s", ziel_adresse); 
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Улучшенная очистка буфера
}

int lese_ganzzahl_nur_typ(void) {
    int zahl;      
    int status;   

    do {
        printf("Bitte geben Sie eine ganze Zahl ein (1-5): ");
        status = scanf("%d", &zahl);
        while (getchar() != '\n'); 
        if (status != 1 || zahl < 1 || zahl > 5) {
            printf("Fehler: Bitte geben Sie NUR eine ganze Zahl ein.\n");
			continue;
        }

    } while (status != 1 || zahl < 1 || zahl > 5); 

    return zahl;
}

void ausgabe_str (int x, char *ziel_adresse){

	printf("Sie brauschen str# %d, das ist: \n", x-1);
	printf("Das ist: %s \n", ziel_adresse);

}
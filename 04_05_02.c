//04_05_02

// GANZZAHL zahl[10] // Array für 10 Zahlen (Ziffern)
// GANZZAHL hashwert = 0

// // 1. Eingabe von 10 einstelligen Zahlen (i läuft von 0 bis 9)
// FÜR (i = 0; i < 10; i++)
//     Eingabe: zahl[i] // Mit Gültigkeitsprüfung (einstellig, z.B., 0-9)

// // 2. Berechnung des Hashwerts

// // Starte mit den ersten zwei Zahlen
// hashwert = (zahl[0] * zahl[1]) MOD 10

// // Gehe die restlichen Zahlen durch (i läuft von 2 bis 9)
// FÜR (i = 2; i < 10; i++)
//     // Nimm den bisherigen Hashwert
//     // Multipliziere ihn mit der nächsten Zahl
//     // Bilde den Rest Modulo 10
//     hashwert = (hashwert * zahl[i]) MOD 10

// // 3. Ausgabe
// Ausgabe: "Der Hashwert ist: " hashwert

// Программа сначала запрашивает 10 однозначных чисел.

// Затем определяется хеш-значение следующим образом:
// Первая цифра умножается на вторую, и от результата берется остаток по модулю 10.
// Этот результат умножается на третью цифру, и снова от результата 
// берется остаток по модулю 10.
// Этот результат умножается на четвертую цифру, и от 
// результата берется остаток по модулю 10.
// ... и так далее, пока не будет умножено на 10-е число, 
// после чего рассчитывается остаток по модулю 10.
// Этот окончательный результат и есть хеш-значение. 
// Оно выводится на консоль, после чего программа завершается.
// Примечание: Пожалуйста, напишите всю программу в функции main.

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
#pragma execution_character_set("utf-8")// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
int lese_ganzzahl_nur_typ(void); 

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
	system("cls"); // Löscht die Konsole// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

	// Скелет логики в main
int zahl[10];
int hashwert = 0;

// 1. Цикл для ввода 10 чисел (с i=0 по i=9)
for (int i = 0; i < 10; i++) {
	printf("Bitte geben Sie die %2d. einstellige Zahl (0-9) ein: ", i + 1);
    
	
	if (i == 0){
		zahl[i] = lese_ganzzahl_einstellig();
		printf("\n");
	} else if (i == 1){
		zahl[i] = lese_ganzzahl_nur_typ();
		hashwert = (zahl[0] * zahl[1]) % 10;
		printf("\n");
	} else if (i > 1) {
		hashwert = (hashwert * zahl[i]) % 10;
	}
}
	
	return 0;
} 

int lese_ganzzahl_einstellig(void) {
    int zahl;
    int status;
    int fehler;

    do {
        fehler = 0;
        status = scanf("%d", &zahl);
        int c;
        while ((c = getchar()) != '\n' && c != EOF); 
        
        if (status != 1) {
            printf("Fehler: Bitte geben Sie NUR eine ganze Zahl ein.\n");
            fehler = 1;
        } 
        
        if (fehler == 0 && (zahl < 0 || zahl > 9)) {
            printf("Fehler: Die Zahl muss einstellig sein (0 bis 9).\n");
            fehler = 1;
        }

    } while (fehler == 1); 

    return zahl;
}
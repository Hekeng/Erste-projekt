//02_03_01_MODULO
// Programm: Eingabe einer Zahl, die durch 10 teilbar ist



#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	#include <stdio.h>

    // Deklaration der Variablen (Объявление переменной)
    int x;

    // Eingabe: Das Programm fragt den Benutzer nach einer Zahl
    // (Ввод: Программа запрашивает число у пользователя)
    printf("Bitte geben Sie eine ganze Zahl ein: ");
    
    // Erste Eingabe (Первый ввод)
    if (scanf("%d", &x) != 1) {
        // Fehlerbehandlung für den Fall, dass keine Zahl eingegeben wird
        printf("Fehlerhafte Eingabe.\n");
        return 1;
    }

    // Schleife: Solange die Zahl nicht durch 10 teilbar ist (Rest ungleich 0)
    // (Цикл: Пока число не делится на 10 без остатка)
    while (x % 10 != 0) {
        printf("Die Zahl %d ist nicht durch 10 teilbar. Bitte versuchen Sie es erneut.\n", x);
        printf("Neue Zahl eingeben: ");
        
        // Erneute Eingabe im Schleifenkörper (Повторный ввод в теле цикла)
        if (scanf("%d", &x) != 1) {
            printf("Fehlerhafte Eingabe. Programmabbruch.\n");
            return 1;
        }
        // Leert den Eingabepuffer, falls der Benutzer Text eingibt (Очистка буфера)
        while (getchar() != '\n'); 
    }

    // Ausgabe: Wird erst erreicht, wenn die Schleife beendet ist (x % 10 == 0)
    // (Вывод: Выполняется только после завершения цикла)
    printf("\n%d ist eine durch 10 teilbare Zahl\n", x);

	return 0;
}
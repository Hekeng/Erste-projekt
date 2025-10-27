#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

int zaehler = 1;       // стартовое значение
int richtung = 1;       // 1 = вверх, -1 = вниз

while (1) {
	
    printf("Zaehler: %d\n", zaehler);

    // меняем направление, если достигли границ
    if (zaehler == 10) richtung = -1;
    if (zaehler == 1)  richtung = 1;

    zaehler += richtung; // увеличиваем или уменьшаем
}

	return 0;
}



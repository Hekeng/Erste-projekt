#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")



int zufall (int a, int b);

char istVolljaehrig (int a);

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	for (int i = 0; i < 100; i++)
	{
		int zufall_alt = zufall (1,100);
		char result = istVolljaehrig (zufall_alt);

		printf("Durchlauf# %d Ein zufälliges Alter von %d Jahren gilt als Erwachsener - %c \n", i, zufall_alt, result);
		Sleep(20);
	}

	return 0;
}

// Определение функции: zufall (Ваша реализация верна)
int zufall (int a, int b){
    int min, max;

    if (a > b){
        min = b;
        max = a;
    } else{
			min = a;
			max = b;
		}

    if (min == max) return min;

    return rand() % (max - min + 1) + min;
}
char istVolljaehrig (int a){

return (a >= 18) ? 'j' : 'n';

}

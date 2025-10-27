// Aufgabe 3 – Bibliotheksbuch-Rückgabe
// Eine Bibliothek hat 100 Bücher. Ein Array int tage[100] speichert, wie viele Tage jedes
// Buch überzogen ist.
//  Berechne die Gesamtstrafe (1 € pro Tag).
//  Finde, wie viele Bücher pünktlich (0 Tage) zurückgegeben wurden.
//  Ermittle das meist überzogene Buch (höchster Wert).
//  Prüfe, ob mindestens 5 Bücher über 30 Tage verspätet sind → Ausgabe
// "Mahnverfahren starten".

// Исходная постановка:
// Библиотека имеет 100 книг. Массив (int tage[100]) хранит, 
// на сколько дней каждая книга просрочена.

// Необходимые действия:

// Рассчитать общую сумму штрафов (Gesamtstrafe) 
// при ставке 1 € за каждый день просрочки.

// Найти, сколько книг было возвращено вовремя (0 дней просрочки).

// Определить наиболее просроченную книгу (meist überzogene Buch), 
// т.е. с наибольшим количеством дней просрочки.

// Проверить, просрочено ли минимум 5 книг более чем на 30 дней. 
// Если да, вывести сообщение: "Mahnverfahren starten" 
// (Начать процедуру взыскания/претензионную работу).


#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

#include <stdlib.h>  // для rand() и srand()
#include <time.h>    // для time()

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole
	
	srand(time(NULL)); // Startwert für Zufallszahlen (Seed)

	int bibliothek[100] ={0};
	const float strafeProTag = 1.0;

	float sume_uberfallig_tagen = 0;
	int pünktlich_zurückgegeben = 0;

	int meist_überzogene_buch = 0;
	int numer_meist_überzogene_buch = 0;

	int über_30_tage_überfällig_count = 0;

	for (int i = 0; i < 100; i++) {

		int entscheidung = rand() % 7; // 1. Выбираем один из 7 "слотов" (0 до 6)
		int temp_val = 0;

		if (entscheidung <= 3) { // 4 aus 7 - 57% (57%): 0 - 10 дней. 
			temp_val = rand() % 11; 
		} else if (entscheidung <= 5) { // 2 из 7 - 28.5%  11 - 30 дней
			temp_val = rand() % (30 - 11 + 1) + 11; 
		} else { 
			temp_val = rand() % (120 - 31 + 1) + 31; // entscheidung == 6 (1 из 7 - 14.5%) 31 - 120 дней 
		}
	
		bibliothek[i] = temp_val;

		if (bibliothek[i] > 0) {
			sume_uberfallig_tagen = sume_uberfallig_tagen + bibliothek[i];
		}

		if (bibliothek[i] == 0) {
			pünktlich_zurückgegeben ++;
		}

		if (bibliothek[i] > meist_überzogene_buch) {
			meist_überzogene_buch = bibliothek[i];
			numer_meist_überzogene_buch = i;
		}

		if (bibliothek[i] > 30) {
			über_30_tage_überfällig_count++;
		}

		
		printf("Buch Nummer %d hat eine %d tägige Verspätung am Pumper\n", i+1, bibliothek[i]);
		Sleep(5);
	}
	
	printf("Summe der Gebühr für überfällige Bücher ist %.2f \n", sume_uberfallig_tagen*strafeProTag);

	printf("%d Bücher wurden fristgerecht an die Bibliothek zurückgegeben.\n", pünktlich_zurückgegeben);

	printf("Buch Nummer %d ist das Buch in der Bibliothek, das %d Tage überfällig ist.\n", numer_meist_überzogene_buch+1, meist_überzogene_buch);

	if (über_30_tage_überfällig_count >= 5) {
		printf("Mahnverfahren starten! \n");
	}
	return 0;
}
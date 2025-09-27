// Aufgabe_02_04_02

// Das Programm startet mit einer Schleife, die 6000-mal durchlaufen wird. Pro Durchlauf 
//werden zwei Würfel-Ergebnisse zufällig ausgelost. Nach der Schleife soll auf der Konsole 
//ausgegeben werden, wie oft es zu Durchläufen kam, in denen beide Würfel-Ergebnisse 
//identisch waren.


#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls")
#pragma execution_character_set("utf-8")

#include <stdlib.h>  // для rand() и srand()
#include <time.h>    // для time()

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten
	system("cls"); // Löscht die Konsole

	srand(time(NULL)); // Startwert für Zufallszahlen (Seed)

	int cube1, cube2, zahl_mal = 0;

	for (int i = 0; i <= 6000; i++) {

		cube1 = 1 + rand() % 6;
		cube2 = 1 + rand() % 6;

		if (cube1 == cube2){

			zahl_mal = zahl_mal + 1;

		}

		printf("Würfelwurf #%d: (%d, %d)\n", i + 1, cube1, cube2);

		//Sleep(5); //задержка в милисекундах
		
	}
	
	printf("Anzahl der Dubletten: %d \n", zahl_mal);

	return 0;
}
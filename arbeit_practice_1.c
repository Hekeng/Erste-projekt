// Die Aufgaben sind keine großartig schweren, es geht darum, dass die sehen, wie man mit der Logik umgeht, wie man denkt. Einfach, wie weit man ist.

// IDE: VSCode
// Ausgabe über node.js

// Aufgabe 1
// Die Zahlen 5 bis 25 sollen untereinander ausgegeben werden.

// Aufgabe 2
// Alle geraden Zahlen von 1 bis 50 sollen untereinander ausgegeben werden.

// Aufgabe 3
// Alle Quadratzahlen von 1 bis 25 sollen ausgegeben werden

// Aufgabe 4
// Folgendes Muster soll ausgegeben werden:

// *
// **
// ***
// ****
// *****
// ******
// *******

// Aufgabe 5

// *******
// *****
// ****
// ***
// **
// *

// Aufgabe 6
// Folgendes Muster soll ausgegeben werden:

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

// Aufgabe 7
// Folgendes Muster soll ausgegeben werden

//      *
//     ***
//    *****
//   *******
//  *********
// ***********

// Aufgabe 8
// Ergänze jede Aufgabe um eine Nutzereingabe 
// für die Anzahl der auszugebenden Zeilen/Zahlen


// Aufgaben 9
// Erstelle eine index.js und rufe alle Aufgaben über diese diese 
// mit einer Auswahl von 1 bis 9 auf. Nach jeder Auswahl soll die Schleife 
// von vorne beginnen. Das Programm endet erst, wenn man "Quit" eingibt.

#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
#pragma execution_character_set("utf-8")// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

int min = 0;
int max = 0;
int choice = 0;


void auf_8_user_uafgabe(void);
void lese_ganzzahl_nur_typ(void);
void auf_9_menu_dispatcher(int choice);

void auf_1_zahlen_ausx_bisy(int x, int y);
void auf_2_gerade_zahl_ausx_bisy (int x, int y);
void auf_3_qudraten_ausx_bisy (int x, int y);
void auf_4_star_hoh_ausgeben(int x, int y);
void auf_5_star_unten_ausgeben(int x, int y);
void auf_6_star_hugel_ausgeben(int x, int y);
void auf_7_Weihnachtsbaum(int y);

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
	system("cls"); // Löscht die Konsole// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

	do {
		lese_ganzzahl_nur_typ();
		auf_9_menu_dispatcher(choice);

	} while (choice != 8);
	
	return 0;
} 


void auf_1_zahlen_ausx_bisy(int x, int y){

	int i = x;

	for (i; i <= y; i = i+1) {
		printf("%d \n",i);
		Sleep(25);
	}
}

void auf_2_gerade_zahl_ausx_bisy (int x, int y){

	int i = x;

	for (i; i <= y; i++) {

		if (i % 2 == 0) {
			printf("%d \n",i);
			Sleep(25);
		}
	}
}

void auf_3_qudraten_ausx_bisy (int x, int y){

	int i = x;

		for (i; i <= y; i++) {
			printf("%d \n",i*i);
			Sleep(25);
		}

}

void auf_4_star_hoh_ausgeben(int x, int y){

	int i = x;

	for (i; i <= y; i++) {
		printf("\n");
		for (int j = 1; j <= i; j++){
			printf("*");
		}
		
	}
	
}

void auf_5_star_unten_ausgeben(int x, int y){

	int i = x;

	for (i; i <= y; i++) {
		printf("\n");

		for (int j = y; j >= i; j--){
			printf("*");
		}
		
	}
	
}

void auf_6_star_hugel_ausgeben(int x, int y){

	int i = x;

	for (i; i <= y ; i++) {
		printf("\n");
		for (int j = 1; j <= i; j++){
			printf("*");
		}
		
	}
	
	i = x;

	for (i; i <= y-1; i++) {
		printf("\n");

		for (int j = y-1; j >= i; j--){
			printf("*");
		}
		
	}

}

void auf_7_Weihnachtsbaum(int y){

	printf("Bei dieser Aufgabe wird nur der Maximalwert als Anzahl der Stockwerke unseres Weihnachtsbaums verwendet.\n");


	for (int rows = 1; rows <= y; rows++) {
		printf("\n");

		for (int spaces = y -rows; spaces != 0; spaces--) {
			printf(" ");
		}

		for (int ungeradezahlen = 0; ungeradezahlen < 2 * rows - 1; ungeradezahlen++) {
            printf("*");
        }
		
	}
	
}

void lese_ganzzahl_nur_typ(void) {
	
    int zahl;      
    int status;   

    do {
        printf("Bitte geben Sie eine ganze Zahl ein: (1-8) ");
        status = scanf("%d", &zahl);
        while (getchar() != '\n'); 
        if (status != 1) {
            printf("Fehler: Bitte geben Sie NUR eine ganze Zahl ein. (1-8) \n");
        }

    } while (status != 1 || zahl < 1 || zahl > 8); 

    choice = zahl;
}


void auf_9_menu_dispatcher(int choice) {

	if (choice != 8) { 
        auf_8_user_uafgabe(); // <-- Ввод min/max здесь ОДИН раз
    }
    
    switch (choice) {
        
        case 1:
            printf("*******Aufgabe 1: Die Zahlen 5 bis 25 sollen untereinander ausgegeben werden.*****\n");
	
			auf_1_zahlen_ausx_bisy(min, max);
            break; 
            
        case 2:
            printf("*******Aufgabe 2: Alle geraden Zahlen von 1 bis 50 sollen untereinander ausgegeben werden.*****\n");
	
			auf_2_gerade_zahl_ausx_bisy (min, max);
            break;
            
        case 3:
            printf("*******Aufgabe 3: Alle Quadratzahlen von 1 bis 25 sollen ausgegeben werden*****\n");
			
			auf_3_qudraten_ausx_bisy (min, max);
            break;

		case 4:
			printf("*******Aufgabe 5: Folgendes Muster soll ausgegeben werden: *****\n");
			printf("*\n");
			printf("**\n");
			printf("***\n");
			printf("****\n");
			printf("*****\n");
			printf("******\n");
			printf("*******\n");

            auf_4_star_hoh_ausgeben(min, max);
            break;

		case 5:

			printf("*******Aufgabe 5: Folgendes Muster soll ausgegeben werden: *****\n");
			printf("*******\n");
			printf("******\n");
			printf("*****\n");
			printf("****\n");
			printf("***\n");
			printf("**\n");
			printf("*\n");
			
            auf_5_star_unten_ausgeben(min, max);

            break;

		case 6:
            	printf("*******Aufgabe 6: Folgendes Muster soll ausgegeben werden: *****\n");
				printf("*\n");
				printf("**\n");
				printf("***\n");
				printf("****\n");
				printf("*****\n");
				printf("****\n");
				printf("***\n");
				printf("**\n");
				
				auf_6_star_hugel_ausgeben(min, max);

            break;

		case 7:
				printf("*******Aufgabe 7: Folgendes Muster soll ausgegeben werden: *****\n");
				printf("     *\n"); 		//5 : 1
				printf("    ***\n");		//4 : 3
				printf("   *****\n");		//3 : 5
				printf("  *******\n");		//2 : 7
				printf(" *********\n");		//1 : 9
				printf("***********\n");	//0 : 11

				auf_7_Weihnachtsbaum(max);

            break;

		case 8:
            // Выбрана Задача 7
            printf("Quit\n");
            // auf_7_pyramide_ausgeben();
            break;

        default:
            // Блок выполняется, если 'choice' не совпал ни с одним из 'case'
            printf("Ошибка: Неверный выбор (Введите число от 1 до 9).\n");
            break;
    }
}

void auf_8_user_uafgabe(void) {

	int status = 0;

	do {

		printf("Gib mir den Minimalwert des Bereichs\n");

		do{
			status = scanf("%d", &min);
			while (getchar() != '\n');

			if (status != 1) {
				printf("Fehler: Bitte geben Sie NUR eine ganze Zahl ein.\n");
			}
		} while (status !=1);

		status = 0;

		printf("Gib mir den Maximalwert des Bereichs\n");

		do{
			
			status = scanf("%d", &max);
			while (getchar() != '\n');
			
			if (status != 1) {
				printf("Fehler: Bitte geben Sie NUR eine ganze Zahl ein.\n");
			}
		} while (status !=1);

		if (max == min) {
			printf("Minimum entspricht Maximum, bitte geben Sie die Zahlen erneut ein.\n");
		}

		if (min > max) {
			printf("Sie haben die Zahlen in der falschen Reihenfolge eingegeben. Der eingegebene Minimalwert ist größer als der Maximalwert. Die Werte werden vertauscht.\n");
			int bufer = max;
			max=min;
			min=bufer;
		}

	} while (max == min);

}
#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
#pragma execution_character_set("utf-8")// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.


int lese_ganzzahl_nur_typ(void);
void arifmethic (int a,int b, int* arr);

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
	system("cls"); // Löscht die Konsole// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

	int arr[4];

	char arifmethic_mascht[4][15] = {
    "Summe",      
    "Differenz",  
    "Produkt",    
    "Quotient"    
	};

	int a = lese_ganzzahl_nur_typ();
	int b = lese_ganzzahl_nur_typ();

	arifmethic (a, b, arr);

	for (int i = 0; i < 4; i++) {

		printf("Das Ergebnis für %s ist %d \n", arifmethic_mascht[i], arr[i]);
	}
	
	return 0;
} 

int lese_ganzzahl_nur_typ(void) {
    int zahl;      
    int status;   

    do {
        printf("Bitte geben Sie eine ganze Zahl ein: ");
        status = scanf("%d", &zahl);
        while (getchar() != '\n'); 
        if (status != 1) {
            printf("Fehler: Bitte geben Sie NUR eine ganze Zahl ein.\n");
        }

    } while (status != 1); 

    return zahl;
}


void arifmethic (int a,int b, int* arr){
	
	arr[0] = a + b;
	arr[1] = a - b;
	arr[2] = a * b;
	arr[3] = a / b;

}
//05_01_04


#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
#pragma execution_character_set("utf-8")// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

void codiere (char *str, char* arr1, char* arr2);

int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
	system("cls"); // Löscht die Konsole// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

	char original_text[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna.";

	printf("Ihren str ist: %s\n", original_text);

	char gerade[50];
	char ungerade[50];

	codiere (original_text, gerade, ungerade);


	printf("Ihren gerade arr ist: %s \n", gerade);
	printf("Ihren gerade arr ist: %s \n", ungerade);


	return 0;
} 

void codiere (char *str, char* arr1, char* arr2){

	int gerade_arr_reschner = 0;
	int ungerade_arr_reschnerr = 0;

	for (int i = 0; str[i] != '\0'; i++) {

		if ((i % 2) == 0) {
			arr1[gerade_arr_reschner] = str[i];
			gerade_arr_reschner ++;
		} else {
				arr2[ungerade_arr_reschnerr] = str[i];
				ungerade_arr_reschnerr ++;
		}
		
	}

	arr1[gerade_arr_reschner] = '\0';
	arr2[ungerade_arr_reschnerr] = '\0';

}

void decodiere (char arr1, char arr2){

	int flag_gerade_zuruck = 0;

	printf("Ihren gerade arr ist: %s", arr1);

}
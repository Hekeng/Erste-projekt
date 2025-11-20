//05_03_02

// Pseudocode:

// bubblesort(arr[ ], anzahlFelder)
// {
// 	für(i=anzahlFelder; i>1; i=i-1)
// 	{
// 		für(j=0; j<i-1;j=j+1)
// 		{
// 			wenn(arr[j]>arr[j+1])
// 			{
// 				hilfe=arr[j]
// 				arr[j]=arr[j+1]
// 				arr[j+1]=hilfe
// 			}
// 		}
// 	}
// }


#include <stdio.h>
#include <windows.h> // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
#pragma execution_character_set("utf-8")// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.


int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
	system("cls"); // Löscht die Konsole// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.




	return 0;
} 

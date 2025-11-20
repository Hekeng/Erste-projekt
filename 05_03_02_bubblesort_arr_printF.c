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

int anzahlFelder = 6;

void bubblesortINT(int array[], int zahl);
void bubblesortFLOAT(float array[], int zahl);
void bubblesortCHAR(char array[], int zahl);

void ausgabe_arrays(int intArr[], float floatArr[], char charArr[], int zahl);


int main() {
	system("chcp 65001"); // Setzt die Codepage auf 65001 (UTF-8) für die korrekte Anzeige von Umlauten // Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.
	system("cls"); // Löscht die Konsole// Für system("chcp 1252") und system("cls") помогает отображать корректно символы в терминале VsCode.

	int intArrr[] = {5, 3, 6, 9, 2, 1};
	float floatArr[]={6.2, 78.3, 34.3, 6.7, 6.3, 6.1};
	char charArr[]={'h','j','e','d','i','v'};

	printf("--------------------------\n");
    ausgabe_arrays(intArrr, floatArr, charArr, anzahlFelder);
    printf("--------------------------\n");

	bubblesortINT(intArrr, anzahlFelder);
	bubblesortFLOAT(floatArr, anzahlFelder);
	bubblesortCHAR(charArr, anzahlFelder);

	

	return 0;
} 


void bubblesortINT(int array[], int zahl) {

	printf("ARR INT ist:\n");

    int hilfe;
    for (int i = zahl; i > 1; i--) {

        for (int j = 0; j < i - 1; j++) {

            if (array[j] > array[j + 1]) {
                hilfe = array[j];
                array[j] = array[j + 1];
                array[j + 1] = hilfe;
            }
        }
    }

	for (int y = 0; y < zahl; y++) {
    printf("Str # %d, cointein das str: %d\n", y+1, array[y]);
	Sleep(50); //задержка в милисекундах
    }
}

void bubblesortFLOAT(float array[], int zahl) {

	printf("ARR FLOAT ist:\n");

    float hilfe;
    for (int i = zahl; i > 1; i--) {

        for (int j = 0; j < i - 1; j++) {

            if (array[j] > array[j + 1]) {
                hilfe = array[j];
                array[j] = array[j + 1];
                array[j + 1] = hilfe;
            }
        }
    }

	for (int y = 0; y < zahl; y++) {
    printf("Str # %d, cointein das str: %.2f\n", y+1, array[y]);
	Sleep(50); //задержка в милисекундах
    }

}

void bubblesortCHAR(char array[], int zahl) {

    printf("ARR CHAR ist:\n");
	
	char hilfe;
    for (int i = zahl; i > 1; i--) {

        for (int j = 0; j < i - 1; j++) {

            if (array[j] > array[j + 1]) {
                hilfe = array[j];
                array[j] = array[j + 1];
                array[j + 1] = hilfe;
            }
        }
    }
		for (int y = 0; y < zahl; y++) {
		Sleep(50); //задержка в милисекундах
        printf("Str # %d, cointein das str: %c\n", y+1, array[y]);
    }

}


void ausgabe_arrays(int intArr[], float floatArr[], char charArr[], int zahl) {
    printf("INT: ");
    for (int i = 0; i < zahl; i++) printf("%d ", intArr[i]);
    printf("\nFLOAT: ");
    for (int i = 0; i < zahl; i++) printf("%.1f ", floatArr[i]);
    printf("\nCHAR: ");
    for (int i = 0; i < zahl; i++) printf("%c ", charArr[i]);
    printf("\n");
}
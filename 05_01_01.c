// // Funktion: inputINT
// FUNKTION inputINT(TEXT text, GANZZAHL x)
//     // 1. Gib den Aufforderungstext aus
//     Ausgabe: text

//     // 2. Lese die Eingabe des Benutzers in die Variable x
//     Eingabe: x

// ENDE FUNKTION



#include <stdio.h>
#include <windows.h> 
#pragma execution_character_set("utf-8")

// Прототип функции: inputINT(текст запроса, указатель на переменную)
void inputINT(const char* text, int* zahl_ptr);

int main() {
    system("chcp 65001"); 
    system("cls"); 
    
    int zahl_a = 0;
    int zahl_b = 0;

    printf("--- Programm Aufgabe_05_01_01: InputINT Funktion ---\n");

    // 1. Использование функции inputINT для первой переменной
    inputINT("Bitte geben Sie die ERSTE ganze Zahl ein: ", &zahl_a);
    
    // 2. Использование функции inputINT для второй переменной
    inputINT("Bitte geben Sie die ZWEITE ganze Zahl ein: ", &zahl_b);

    printf("\n--- Ausgabe ---\n");
    printf("Ihre erste Zahl war: %d\n", zahl_a);
    printf("Ihre zweite Zahl war: %d\n", zahl_b);

    return 0;
} 

// ------------------------------------------------------------------
// ФУНКЦИЯ inputINT: Реализует логику блок-схемы с проверкой
// ------------------------------------------------------------------
void inputINT(const char* text, int* zahl_ptr) {
    int status; 

    // Логика повторяется (do-while) до тех пор, пока ввод не будет корректным
    do {
        // Ausgabe: text
        printf("%s", text); 
        
        // Eingabe: x (читаем в память по указателю)
        status = scanf("%d", zahl_ptr); 
        
        // Очистка буфера (даже если scanf был неуспешен)
        int c;
        while ((c = getchar()) != '\n' && c != EOF); 
        
        // Проверка: Был ли ввод целым числом?
        if (status != 1) {
            printf("Fehler: Ungültiger Eingabetyp. Bitte geben Sie nur eine ganze Zahl ein.\n");
        }

    } while (status != 1); // Повторяем, пока status != 1
}

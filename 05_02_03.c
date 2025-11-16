// FUNKTION initINTarray (ZEIGER_AUF_INT arr, GANZZAHL n):

//   // 1. Basisfall (Условие выхода):
//   WENN n IST KLEINER ODER GLEICH 0:
//     GIB ZURÜCK // BEENDE FUNKTION
  
//   // 2. Rekursiver Schritt:
//   SONST:
//     // A. Aktion ausführen: Schreibe 0 in die aktuelle Zelle
//     // *arr dereferenziert den Zeiger und setzt den Wert.
//     SETZE *arr GLEICH 0 
    
//     // B. Rekursiver Aufruf mit kleinerem Problem:
//     // Reduziere die Anzahl (n-1) und verschiebe den Zeiger (arr + 1)
//     rufe initINTarray(arr + 1, n - 1)
  
// BEENDE FUNKTION

#include <stdio.h>
#include <windows.h> 

#pragma execution_character_set("utf-8")

// Используем const int для современных компиляторов, как у вас
const int MAX_SIZE = 100;

int lese_ganzzahl_nur_typ(void);
void initINTarray(int *array, int n);

int main() {
    system("chcp 65001");
    system("cls");
    
    int mein_array[MAX_SIZE];
    int x = lese_ganzzahl_nur_typ();

    // 1. Защита от переполнения буфера
    if (x > MAX_SIZE) {
        x = MAX_SIZE;
        printf("\nWARNUNG: Die Anzahl der Elemente wurde auf %d begrenzt.\n", MAX_SIZE);
    } else if (x < 0) {
        x = 0;
    }

    // Инициализация рекурсивной функцией
    initINTarray(mein_array, x);

    printf("\n--- Array-Inhalt ---\n");
    
    // 2. ИСПРАВЛЕННЫЙ ЦИКЛ: Итерация только до 99 (MAX_SIZE - 1)
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("Element # %d ist %d\n", i, mein_array[i]);
    }
    
    return 0;
} 

// РЕАЛИЗАЦИЯ initINTarray (Ваше решение — идеально)
void initINTarray(int *array, int n) {
    
    // Базовый случай: n <= 0
    if (n <= 0) {
        return; 
    }

    // Действие: Записываем 0 в текущую ячейку
    *array = 0; 

    // Рекурсивный шаг: Сдвигаем указатель (array + 1) и уменьшаем счетчик (n - 1)
    initINTarray(array + 1, n - 1);
}
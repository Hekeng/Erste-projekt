//05_03_03


// Pseudocode:

// sortiere(array, links, rechts) {
//      pivot=array[links]  
//      i=links+1 
//      j=rechts 
//      solange(i < j)  {
//          solange(i<rechts UND array[i]<pivot) {
//              i++ 
//          }
//          solange(j>links UND array[j]>=pivot) {
//              j--
//          }
//          wenn(i < j) {
//              tausche array[i] mit array[j]
//          }
//      }
//      wenn(array[j]<pivot) {
//           tausche array[j] mit array[links]
//      }
//      return j
// }

// quicksort(array,links,rechts) {
// 	wenn(links<rechts) {
// 		pivotEndposition=sortiere(array,links,rechts)
// 		quicksort(array, links, pivotEndposition-1)
// 		quicksort(array, pivotEndposition+1,rechts)
// 	}
// }


// Der obige Pseudocode dient als Grundlage für die Funktionen sortiereINT 
// und quicksortINT, die gemeinsam ein Integer-Array numerisch sortieren.

#include <stdio.h>
#include <windows.h> 

int links = 0;
int rechts = 6; 
int intArrr [] ={6, 3, 5, 7, 8, 2, 1};
int N = 7;

int sortiereINT (int array[], int links, int rechts);
void quicksortINT(int array[], int links, int rechts);
void print_array(int arr[], int size, int l, int r, const char* label);

int main() {
    system("chcp 65001"); 
    system("cls"); 

    printf("--- ИСХОДНЫЙ МАССИВ ---\n");
    print_array(intArrr, N, -1, -1, "Начало"); 
    
    quicksortINT(intArrr, links, rechts); 

    printf("\n--- ФИНАЛЬНЫЙ РЕЗУЛЬТАТ ---\n");
    print_array(intArrr, N, -1, -1, "Конец"); 

    return 0;
} 

// ----------------------------------------------------------------------
// ФУНКЦИЯ ВЫВОДА ДЛЯ ВИЗУАЛИЗАЦИИ
// ----------------------------------------------------------------------
void print_array(int arr[], int size, int l, int r, const char* label) {
    printf("%-10s [%d..%d]: ", label, l, r);
    for (int k = 0; k < size; k++) {
        if (k >= l && k <= r) {
            printf("[%d] ", arr[k]);
        } else {
            printf("%d ", arr[k]);
        }
    }
    printf("\n");
    Sleep(100);
}

int sortiereINT (int array[], int links, int rechts) {

    int pivot = array[links];
    int i = links + 1;
    int j = rechts;
    int tausche;

    while(i < j) {
        while(i < rechts && array[i] < pivot) {
            i= i + 1; 
        }
        while(j > links && array[j] >= pivot) {
            j = j - 1;
        }
        if (i < j) {
				//(Swap)
            tausche = array[i];
            array[i] = array[j];
            array[j] = tausche;
            print_array(array, N, links, rechts, "tausche");
        }
    }

    if(array[j] < pivot) {
        tausche = array[j];
        array[j] = array[links];
        array[links] = tausche;
        print_array(array, N, links, rechts, "Pivot nach platze"); 
    }
    return j;
}

void quicksortINT(int array[], int links, int rechts) {
    if(links < rechts) {
        print_array(array, N, links, rechts, "Recursive");
		int pivotEndposition = sortiereINT(array,links,rechts);
        quicksortINT(array, links, pivotEndposition-1);
        quicksortINT(array, pivotEndposition+1, rechts);
    }
}
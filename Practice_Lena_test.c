#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(void)
{

    SetConsoleOutputCP(65001);
    system("cls");
    int i, j, k, zahl;
    
    printf("Geben Sie bitte wie hoch Ihren Tannenbaum sein soll: ");
        fflush(stdin);
        scanf (" %d", &zahl);

    for (i=zahl; i>=0; i--)
    {
        for (j=i; j<=zahl-1; j++)
            {
                printf (" ");
            };
        for (k=1; k<=i+i-1; k++)
            {
                printf ("*");
            };
        printf("\n");
        };


    system ("pause");
    return 0;
}
    

/*#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int height; 
    printf("Height: ");
    scanf(" %d", &height);

    // 1. ВНЕШНИЙ ЦИКЛ: Идет "Прямо" (от 0 до height)
    // Мы считаем строки по порядку: 1-я, 2-я, 3-я...
    for (int i = 0; i < height; i++) 
    {
        // 2. ПРОБЕЛЫ: Их количество просто равно номеру строки (i)
        // 1-я строка (i=0) -> 0 пробелов
        // 2-я строка (i=1) -> 1 пробел
        for (int j = 0; j < i; j++) 
        {
            printf(" ");
        }

        // 3. ЗВЕЗДЫ: Вот тут сложная формула
        // Мы берем (Общую высоту - текущую строку) и умножаем на 2
        for (int k = 0; k < 2 * (height - i) - 1; k++) 
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
    */
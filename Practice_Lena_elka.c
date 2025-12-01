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

    for (i=1; i<=zahl; i++)
    {
        for (j=zahl-i; j<zahl-1; j++)
            {
                printf (" ");
            };
        for (k=1; k<=i+i-1; k++)
            {
                printf ("*");
            };
        printf("\n");


    system ("pause");
    return 0;
}
    };
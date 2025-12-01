#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(void)
{

    SetConsoleOutputCP(65001);
    system("cls");
    int i, j, k, zahl, wahl;


    //============= 9  ===============//
    do{
    printf("Welche Aufgabe möchten Sie überprüfen? Geben Sie bitte die Zahl zwischen 1 und 7 ein oder tippen Sie 0 um raus zu kommen. \n");
    fflush(stdin);
    scanf (" %d", &wahl);
    switch (wahl)
    {
        //================ 1 ================//
        case 1:
            for (i=5; i<26; i++)
    {
printf("%d ", i);
    }
        printf("\n");
            break;

        //============== 2 ================//
        case 2:
        
    for (i=2; i<=50; i=i+2)
    {
printf("%d ", i);
    }
        printf("\n");
            break;

            //============== 3 ================//
        case 3:
    for (i=1; i*i<=25; i++)
    {
        printf("%d ", i*i);
    }
        printf("\n");
            break;

          //============= 4  ===============//
            case 4:
            printf("Geben Sie bitte wie viele Zeilen mit Sternen Sie haben möchten: ");
    fflush(stdin);
    scanf (" %d", &zahl);
    for (i=zahl; i>0; i--)
    {
        for (j=i; j<=zahl; j++)
        {
            printf ("*");
        }
        printf("\n");
    }
        printf("\n");
            break;

         //============= 5  ===============//
        case 5:
    printf("Geben Sie bitte wie viele Zeilen mit Sternen Sie haben möchten: ");
    fflush(stdin);
    scanf (" %d", &zahl);
    for (i=1; i<=zahl; i++)
    {
        for (j=i; j<=zahl; j++)
        {
            printf ("*");
        }
        printf("\n");
    }
        printf("\n");
            break;

                     //============= 6  ===============//
        case 6:
        printf("Geben Sie bitte wie viele Sternen in der MitteSie haben möchten: ");
        fflush(stdin);
        scanf (" %d", &zahl);

    for (i=zahl; i>0; i--)
    {
        for (j=i; j<=zahl; j++)
        {
            printf ("*");
        }
        printf("\n");
    }
    for (i=1; i<=zahl-1; i++)
    {
        for (j=i; j<=zahl-1; j++)
        {
            printf ("*");
        }
        printf("\n");
    }
        printf("\n");
            break;

                     //============= 7  ===============//

            case 7:
                    printf("Geben Sie bitte wie hoch Ihren Tannenbaum sein soll: ");
        fflush(stdin);
        scanf (" %d", &zahl);

    for (i=1; i<=zahl; i++)
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
            break;

                     //============= Exit  ===============//

        case 0:
            break;
    }
}while (wahl != 0);
    printf("\n");
    system ("pause");
    return 0;
}
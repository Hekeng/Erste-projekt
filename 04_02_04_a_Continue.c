#include<stdio.h>
#include<windows.h>


int main(void)
{
   system("chcp 1252");
   system("cls");

   int arr[10],i=0,eingabe,zaehler=0;

   do
   {
       printf("Bitte geben Sie eine ganze, positive Zahl ein: ");
       fflush(stdin);
       scanf("%d",&eingabe);
       if(eingabe<=0)
       {
           zaehler++;
           continue;
       }
       arr[i]=eingabe;
       i++;
   }
   while(i<10);
   printf("Sie hatten %d falsche Eingaben.\n\n",zaehler);
   for(i=0;i<10;i++)
   {
       printf("%d, ",arr[i]);
   }
   printf("\n\n");
   system("Pause");
   return 0;
}

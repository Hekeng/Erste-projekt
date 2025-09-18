#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int gewuerfelte_zahl = 0;
    int anzahl_versuche = 0;

    srand(time(NULL)); 

    do {
        anzahl_versuche++;
        gewuerfelte_zahl = rand() % 6 + 1;
        printf("Es wurde eine %d gewuerfelt.\n", gewuerfelte_zahl);
    } while (gewuerfelte_zahl != 6);

    printf("Nach %d Versuchen ist die 6 gefallen!\n", anzahl_versuche);

    return 0;
}

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main()
// {

//     //int wurf = rand() % 6 + 1;
//     // Modulo ist der Rest von der ganz Division
//     //10 Modulo 6 = Rest von 10/6 = 4
//     int wurf=0;
//     srand(time(NULL));


//     wurf = rand() % 6 + 1;
//     printf("\nDu hast gerade %d gewürfelt:", wurf);


//     wurf = rand() % 6 + 1;
//     printf("\nDu hast gerade %d gewürfelt:", wurf);


//     wurf = rand() % 6 + 1;
//     printf("\nDu hast gerade %d gewürfelt:", wurf);


// 	return 0;

// }

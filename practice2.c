#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

    //int wurf = rand() % 6 + 1;
    // Modulo ist der Rest von der ganz Division
    //10 Modulo 6 = Rest von 10/6 = 4
    int wurf=0;
    srand(time(NULL));


    wurf = rand() % 6 + 1;
    printf("\nDu hast gerade %d gewürfelt:", wurf);


    wurf = rand() % 6 + 1;
    printf("\nDu hast gerade %d gewürfelt:", wurf);


    wurf = rand() % 6 + 1;
    printf("\nDu hast gerade %d gewürfelt:", wurf);


	return 0;

}

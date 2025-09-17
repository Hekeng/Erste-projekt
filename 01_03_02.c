#include <stdio.h>


int main() {


int a = 1;

	printf("Bitte geben Sie %i symbol ein ", a);
	char symb1 = 'a';
	scanf(" %c", &symb1);
	a=a+1;

	printf("Bitte geben Sie %i symbol ein ", a);
	char symb2 = 'b';
	scanf(" %c", &symb2);
	a=a+1;

	printf("Bitte geben Sie %i symbol ein ", a);
	char symb3 = 'c';
	scanf(" %c", &symb3);
	a=a+1;

	printf("%c\n", symb1);
	printf("%c\n", symb2);
	printf("%c\n", symb3);

    return 0;
} 
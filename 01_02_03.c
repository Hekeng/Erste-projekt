#include <stdio.h>

int main() {

    char name [] = "Hans Muller";
    int alter = 45;
    float gross = 1.85;
    float gewicht = 80.5; // Новая переменная: вес

    printf("Name: %s\n"
           "Alter: %d\n"
           "Grosse: %.2f\n"
           "Gewicht: %.1f\n", name, alter, gross, gewicht); // Добавлен вывод веса

    return 0;
}
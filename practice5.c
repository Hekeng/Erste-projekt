
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tage, i = 1;
  float einnahmen, summe = 0.0;
  float maxeinnahemen = 0;

  printf("Wie viele Tage möchten Sie erfassen? ");
  scanf("%d", &tage);

  for (i = 1; i <= tage; i++){

        printf("einnahme fuer Tag %d; ", i);
        scanf("%f", &einnahmen);
        if (maxeinnahemen < einnahmen){
                //record wurde gebrochen
            maxeinnahemen = einnahmen;
        }
        summe += einnahmen;

  }

  printf("die höchste Einnahme pro Tag war: %.2f ", maxeinnahemen);
  printf("Die gesamten Einnahamen in %d Tagen betragen: %2.f \n", tage, summe);

  return 0;

}

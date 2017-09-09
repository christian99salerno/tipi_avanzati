#include <stdio.h>

int main () 
{

int x1,x2,x3;

int numbers[3];

printf("Somma e Media\n");

printf("\n");

printf("Inserisci tre valori interi:\n");

printf("? ");
scanf("%d", &x1);

printf("? ");
scanf("%d", &x2);

printf("? ");
scanf("%d", &x3);

numbers[0] = x1;
numbers[1] = x2;
numbers[2] = x3;

int somma = numbers[0] + numbers[1] + numbers[2];

float media = somma/3.0;

printf("\n");

printf("Dati iniziali:\n");

printf("numbers[0] = %d\n", numbers[0]);
printf("numbers[1] = %d\n", numbers[1]);
printf("numbers[2] = %d\n", numbers[2]);
  
printf("\n");

printf("Somma: %d\n", somma);
printf("Media: %f\n", media);

  return 0;
}

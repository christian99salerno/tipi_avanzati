#include <stdio.h>

int main () 
{

double n_double;

printf("Inserisci un valore in virgola mobile:");
scanf("%lf", &n_double);

int n_intero = (int)n_double;

printf("Valore in virgola mobile:%lf\n", n_double);
printf("Valore in intero:%d\n", n_intero);

  return 0;
}

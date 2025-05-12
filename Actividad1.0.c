#include <stdio.h>
int main (){
  int N,suma = 0;
  printf("Ingresa un numero: ");
  scanf("%d", &N);
  for (int i = 1; i<=N ; i++){
    suma += i;
    
  }
  printf("suma de 1 a %d es: %d\n", N ,suma);
    return 0;
  }
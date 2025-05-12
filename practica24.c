#include <stdio.h>

int main() { float HST, PH, salario;
 // Entrada de datos
  printf("Ingrese las horas semanales trabajadas: ");
    scanf("%f", &HST);
    printf("Ingrese el precio por hora: ");
    scanf("%f", &PH);
     if (HST <= 40) {
        salario = HST * PH;
    } else {
        salario = (40 * PH) + (PH * 1.5 * (HST - 40));
    }
printf("El salario semanal es: %.2f\n", salario);
return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int numerosPorGenerar, i, j, numAleatorio;
srand(time(0));
numerosPorGenerar = rand() % 16 + 5;
printf("Generando %d números aleatorios:\n", numerosPorGenerar);
for (i = 0; i < numerosPorGenerar; i++) {
numAleatorio = rand() % 30 + 1;
printf("%-2d ", numAleatorio);
for (j = 0; j < numAleatorio; j++) {
printf("$");
}
printf("\n");
}
return 0;
}

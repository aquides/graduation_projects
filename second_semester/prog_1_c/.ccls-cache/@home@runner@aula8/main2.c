#include <stdio.h>

int main(void) {
  int contador;
  contador = 1; 
  int ex1[6];

  while (contador <= 6){
    printf("Insira os valores\n");
    scanf("%d", &ex1[contador]);
    contador = contador + 1;
  }
  printf("\n%d, %d, %d, %d, %d, %d", ex1[6], ex1[5], ex1[4], ex1[3], ex1[2], ex1[1]);
  
  
  return 0;
}
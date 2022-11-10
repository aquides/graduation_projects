#include <stdio.h>

//EX 1:
int main(void) {
  /*
  int contador;
  contador = 1; 
  int ex1[6];

  while (contador <= 6){
    printf("Insira os valores\n");
    scanf("%d", &ex1[contador]);
    contador = contador + 1;
  }
  printf("\n%d, %d, %d, %d, %d, %d", ex1[6], ex1[5], ex1[4], ex1[3], ex1[2], ex1[1]); */
  return 0;
  }
  //PROF

  #define N 6 
  void q1(){
    int vetor[N];

    for (int i = 0; i < N; i++ ){
      printf("Poe valor %d", i);
      scanf("%d", &vetor[i]);
      }
    for (int i = N; i >= 0; i--){
      printf("%d", vetor[i]);
    }
  }


  // EX 2:

#define N 8
void q2()
{
  int vetor[N];
  int x,y;
  for (int i = 0; i < N; i++ ){
  printf("Poe valor %d", i);
  scanf("%d", &vetor[i]);
}
  printf("Digite X e Y: ");
  scanf("%d %d", &x, &y);
  printf("%d - %d = %d", vetor[x], vetor[y], vetor[x]-vetor[y]);
}

void q3()
{
  
}
  
  

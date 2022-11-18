<<<<<<< HEAD
Escreva um programa que leia um inteiro N e crie uma matriz alocada
dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o valor 0 na
diagonal principal, o valor 1 nos elementos acima da diagonal principal e o valor −1
nos elementos abaixo da diagonal principal.
=======
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

  #define Y 6 
  void q1(){
    int vetor[Y];

    for (int i = 0; i < Y; i++ ){
      printf("Poe valor %d", i);
      scanf("%d", &vetor[i]);
      }
    for (int i = Y; i >= 0; i--){
      printf("%d", vetor[i]);
    }
  }


  // EX 2:

#define X 8
void q2()
{
  int vetor[X];
  int x,y;
  for (int i = 0; i < N; i++ ){
  printf("Poe valor %d", i);
  scanf("%d", &vetor[i]);
}
  printf("Digite X e Y: ");
  scanf("%d %d", &x, &y);
  if ( x >= N || x <0 || y >= N || y < 0)
    printf("Indices invalidos\n");
  else{
    printf("%d - %d = %d", vetor[x], vetor[y], vetor[x]-vetor[y]);
    }
  return;
}
#define N 9
void q3()
{
  int A[N];
  int B[N];
  int C[N];


  for (int i = 0; i < N; i++ ){
    printf("Poe valor vetor A %d", i);
    scanf("%d", &A[i]);
      }
  for (int i = 0; i < N; i++ ){
    printf("Poe valor vetor B %d", i);
    scanf("%d", &B[i]);
    }

  // FALTA C
  for (int i = 0; i < N; i++ ){
    C[i] = A[i] - B[i];
    }

  
  
  for (int i = 0; i < N; i++ ){
    printf("%d", C[i]);
    }


}
  
  
>>>>>>> 48602bffea8c59dd23f380eaabceb92ff1612d50

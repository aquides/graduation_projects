#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia um inteiro N e crie uma matriz alocada
dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o valor 0
na diagonal principal, o valor 1 nos elementos acima da diagonal principal e o
valor −1 nos elementos abaixo da diagonal principal. */

/*

int **criar_matriz( int linhas, int colunas){ // O retorno da função deve ser
igual ao chamada, ou seja, caso P seja ** logo o retorno devera tambem ser **
  int **m; // ponteiro local
  m = (int **)malloc(sizeof(int *) * linhas); // asterisco a menos no loc que
int. for ( int i=0; i<linhas; i++ ) m[i] = (int *)malloc(sizeof(int) * colunas);
  return m;
}

int preencher_matriz( int **m, int n){ //  so N por wer matriz quaderatica. O M
é recriado para alocar o valor desejado na posição do P e consequentemente M
aponta para o mesmo lugar for(int i=0; i<n; i++){ for(int j=0; j<n; j++) // J
lin, i col m[i][j] = ( i==j? 0 : (i>j) ?-1 : 1); // se i = j bote 0, se maior
bote -1 se menor bote 1
      }
  return 1;

}

int imprimir_matriz( int **m, int linhas, int colunas){
  for (int i=0; i<linhas; i++){
    for (int j=0; j<colunas; j++){
      printf("%3d ", m[i][j]);
      }
    printf("\n");
    }
  return 1;
}

int q1(){
  int n;
  int **p; // aponta para omesmo lugar que M TODA MUDANÇA DE m REFLETE EM P
  printf("Digite n:");
  scanf("%d", &n);

  p = criar_matriz(n, n); // 2n definem as dimensoes da matriz pois Col != Lin

  preencher_matriz(p, n);
  imprimir_matriz(p, n, n);


}



*/

int *sequencia(int n) {
  int *seq = (int *)malloc(sizeof(int) * n);

  if (n < 2)
    return NULL;
  seq[0] = 0;
  seq[1] = 1;
  for (int i = 2; i < n; i++) {
    seq[i] = seq[i - 1] + seq[i - 2];
  }

  return seq;
}

int q4() {
  int n;
  int *s;
  printf("Digite n:");
  scanf("%d", &n);

  s = sequencia(n);
  for (int i = 0; i < n; i++)
    printf("%d ", s[i]);
  printf(" \n ");
}
int main(void) {
  q4();
  // q1();
}
#include <stdio.h>

/* Heap os tamanhos dos vetores modificam. Heap age como ponteiros para vetores, a outra nao


Alocação dinamica, so se declara a posição no momento da execução
A pilha possui ponteiros aheap so posições

FUNÇÕES ALOCAÇÃO DINÂMICA
# sizeof - retorna tamanho dos dados em bits. Útil para saber quantos bits serão necessários ser alocados
sizeof(tipo); (int, float...)
sizeof variãvel; // Sempre deve ser inteiro

ALOCAÇÃO DE MEMÓRIA
# malloc - Aloca e retorna o primeiro endereç de memoria. Caso o processo falhe se retornará NULL
void *malloc(unsigned int num); // formato funcao
ex:
  int *p;
  p = (int*)malloc(sizeof(int) * 3); // *3 multiplica o numero de bits. 4*3=12. Não se declara previamento o valor do bit pois diferentes computadores podem ter diferentes valores para 1 bit
Caso não seja apagado o endereço fica cheio de lixo

# calloc - Funciona como o malloc porém enves de botar lixo no espaço ele bota 0 caso nao seja apagado

# realloc - realoca/realca espaço de memoria previamente alocados com calloc/malloc
p = (int *)calloc(3, sizeof(int));
p = (int *)realloc(p, sizeof(int) * 5 ); // SUbstitui o  tamanho do ponteiro p
Caso já haja valores naos endereços que seriam substituidos na realocação o realloc muda todo o endereço de retorno de P. Semelhante ao free. Pode correr qudo se muda muito o tamanho do do endereço e bits. Assim coo o malloc, ele cria lixo em espaços vazios

LIBERAÇÃO DE ESPAÇO
free - 
void free(void *ptr);
int *p;
p = (*int)calloc(3, sizeof(int));
free(p); // limpa o endereço de p
p - NULL;

Em vetores estáticos ao se sair da função o espaço é lipo, em ALOCADOS a posição se mantem caso vc não limpe

  */

#include<stdlib.h> // Biblioteca que armazena ALLOCS e NULL
  // EXEMPLO AULA
/*
int main(){
    int *p;

    p = (int *)malloc(sizeof(int) * 5 ); // 5 elementos serao alocado. não se aloca na pilha(Stack) e sim na HEAP
    p[4] = -1; // add -1 na posição especifica, lembrando que começa do 0. Assim emula um vetor estatico
    free(p);
    p = NULL; // Prática

     p = (int *)calloc(5, sizeof(int)); // QTD de elementos sao declaradas np omcop
    p[4] = -1; // add -1 na posição especifica, lembrando que começa do 0. Assim emula um vetor estatico
    free(p);
    p = NULL; // Prática
    return 0;
    
  }
*/

// Armazenamento tipo ALLOC não funciona com matrizes dinâmicas, só estáticas

// SOLUÇÕES

// MATRIZ LINEAR PLANA (1D)
int plana(){
  int *p;
  int linhas = 3, colunas =2;
  int cont = 15;

  p = (int *)malloc(sizeof(int) * linhas * colunas);
  for (int i = 0; i < linhas; i++){
    for (int j=0; j<colunas; j++)
      p[i * colunas + j] = cont++;
  }
  for(int i = 0; i< linhas; i++){
    for (int j =0; j < colunas; j++)
      printf("%d ", p[i * colunas + j]);
  printf("\n");
  }
  free(p);
  p = NULL;
  return 0;
  // 15e 16 0,0 e 0,1. 17 e 18 1,0 e 1,1 e por ai vai
}



// PONTEIRO PARA PONTEIRO - BESUTO

/* Se cria um ponteiro para o ponteiro onde o prieiro referencia a linha e o segundo qual coluna da linha específica irá receber os valores */
int ponteiro(){
  int **p; // quantas vezes será apontado
  int linhas = 3, colunas =5;
  int cont = 35;
  p = (int **)malloc(sizeof(int *) * linhas); // int1 1 * a mais que int2
  for (int i = 0; i < linhas; i++){ // add valores linha 0 de inicio
    p[i] = (int *)malloc(sizeof(int) * colunas);
    for (int j=0; j<colunas; j++)
      p[i][j] = cont++;
  }
  for(int i = 0; i< linhas; i++){
    for (int j =0; j < colunas; j++)
      printf("%d ", p[i][j]);
  printf("\n");
  }
  for(int i =0; i<linhas; i++) // Se usa o for pois há multiplos ponteiros para apagar
    free(p[i]); // apaga prieiro
  free(p); // apaga segundo
  p = NULL; // tira sujeiras
  return 0;

  
}



// PONTEIRO PARA PONTEIRO POR ARRAY
/* Mistura as duas primeiras solução. vetor1 terá todos os dados (1d) e o vetor2 terá ponteiros que apontam os dados que equivalem a coluna X na linha Y. Esses segundos ponteiros apontarao para a posição que cada vetor 1 está na array e onde estará na Coluna*/
int array() {
  int *v; // array
  int **p; // quem se refere a matriz
  int cont = 55;
  int linhas = 5, colunas = 5;
  v = (int *)malloc(sizeof(int) * linhas * colunas);
  p = (int **)malloc(sizeof(int *) * linhas);
  
  for (int i = 0; i<linhas; i++) {
    p[i] = v + i * colunas;
    for (int j = 0; j<colunas; j++)
      p[i][j] = cont++;
  }

  for (int i = 0; i<linhas; i++) {
    for (int j = 0; j<colunas; j++)
      printf("%d ", p[i][j]);
    printf("\n");
  }
  
  free(v);
  free(p);
  v = NULL;
  p = NULL;
  return 0;
}
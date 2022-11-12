#include <stdio.h>
#include <string.h>




int main(void) {
  // QUESTÃO FAÇA UM PROGRAMA QUE LEIA DTRING E A IMPREMA DE TRAS PARA FRENTE
  /*
  char palavra[30];

  printf("Insira uma palavra: ");
  fgets(palavra, 30, stdin);

  for (int i = 30; i >= 0; i--){
    printf("%c", palavra[i]);
  } */

  // CONSTRUA UM PROGRAMA QUE LEIA DUAS STRINGS DO TECLADO. IPRIMA UMA MENSAEM INFORMANDO SE A SEGUNDA STRING LIDA ESTÁ CONTIDA DENTRO DA PRIMEIRA

  /*
  char nome1[30];
  char nome2[30];

  printf("Insira a primeira palavra: ");
  fgets(nome1, 30, stdin);
  
  printf("Insira a segunda palavra: ");
  fgets(nome2, 30, stdin);
  


  if (string.Join(nome2, nome1) = nome1)
    printf("A segunda string está contida na primeira");
  else
    printf("A segunda string não está contida na primeira"); 

  // STRSTR() Compara 2 strings e caso haja divergencia retorna "NULL"

*/

  // ESCREVA UM PROGRAMA QUE LEIA UM NOME DE UMA PESSOA E IMPRIMA AS SUAS INICIAS
  /*
  char nome[100];

  printf("Insira seu nome completo: ");
  fgets(nome, 100, stdin);

  int contador;
  contador = 0;

  // Is NULL
  printf("%c", nome[0]);
  
  for (int i = 1; i <= 100;){
    if(nome[i] = ""){
      contador = i;
      contador = contador + 1;
      printf("%c", nome[contador]);
      i++;}
    else
      i++;
} */

  //CORRAÇÃO LISTA ADALBA

  // CRIE MATRIZ 4X4
/*
int q1();
  int mat[4][4];
  int maior[2] = {0, 0};
    for ( int i = 0; i < 4, i++){
    printf("Informe o numeros da linha %d ", i);
    scanf("%d %d %d %d", &mat[i][0], &mat[i][1],  &mat[i][2],  &mat[i][3]);
    }

    for (int i=0; i < 4; i++){
      for ( int j = 0; j <4; j++ ){
        if (mat[i][j] > mat[maior[0]][maior[1]]){
          maior[0] = i;
          maior[1] = j;
        }
      }
    }
    printf("Maior valor = %d na linha %d, coluna %d\n", mat[maior[0]]  
      [maior[1]], maior[0], maior[1]);
  }  */

int q3()
{
  float notas[10][3] = {
    { 3,5 ,7 },
    { 4, 7,6 },
    { 10,7 ,2 },
    { 1, 8,4 },
    { 4,9 ,3 },
    { 6, 7,1 },
    { 8, 6,5 },
    { 3, 2,1 },
    { 1, 1, 8},
    { 20, 5,7}
    };
  int piores[3] = {0,0,0}

  for (int i = 0; i < 10; i++){
    if( notas[i][0] < notas[i][1] && notas[i][0] < notas[i][2]){
      piores[0]++;
    }
    else {
      if( notas[i][1] < notas[i][2]){
        piores[1]++;
      }
    }
    else{
      piores[2]++;
    }
  printf("Piores Notas:\n");
  printf("P1: ", piores[0]);
  printf("P2: ", piores[1]);
  printf("P3: ", piores[2]);
  }
  return 0;
  
}

#define TAM_STR 100

int q5(){
  char str1[TAM_STR], str2[TAM_STR];
  int tam_str1, tam_str2;
  int j = 0;

  printf(" Str1 :");
  fgets(str1, TAM_STR, stidn);
  printf(" Str2 :");
  fgets(str2, TAM_STR, stidn);
  tam_str1 = strlen(str1);
  tam_str2 = strlen(str2);
  str1[tam_str1 - 1] = '\0';
  str2[tam_str2 - 1] = '\0';
  if(tam_str2 > tam_str1 ){
    printf("%s não está contida em %s", str, str2);
    return 0;
  }
  for ( int i = 0; i <= (tam_str1 - tam_str2); i++ ){
    j = 0; 
    while (j < tam_str2){
      if(str2[j] != str1[i+j]){
        break;
      }
      j++;
    }
    if ( j == tam_str2){
      printf("%s contem %s\n", str1, str2)
      return 0;
    }

  }

  
}
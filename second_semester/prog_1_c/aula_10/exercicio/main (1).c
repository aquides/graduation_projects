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
  }
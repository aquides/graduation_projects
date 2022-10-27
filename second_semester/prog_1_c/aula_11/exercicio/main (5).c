#include <stdio.h>
#include <string.h>


// CARACTER OCUPA 1 BIT, INT 4

#define TAM_STR 100

int q5(){
  char str1[TAM_STR], str2[TAM_STR];
  int tam_str1, tam_str2;
  char *inicio_1, *fim_1;
  char *inicio_2, *fim_2;

  printf(" Str1 :");
  fgets(str1, TAM_STR, stdin);
  printf(" Str2 :");
  fgets(str2, TAM_STR, stdin);
  tam_str1 = strlen(str1);
  tam_str2 = strlen(str2);

  inicio_1 = str1;
  fim_1 = inicio_1 + tam_str1 - 1; // pega endereço do ultimo caracter ao eliminiar antes de /0
  *fim_1 = '\0'; // troca \n por \0
  fim_1--;
  
  inicio_2 = str2;
  fim_2 = inicio_2 - tam_str2 - 1;
  *fim_2 = '\0';
  fim_2--; // decrementa po endereços de string para pegar a primeira letra?
  

  if(tam_str2 > tam_str1 ){
    printf("%s nÃ£o estÃ¡ contida em %s", str1, str2);
    return 0;
  }

  char *p1, *p2;
  

  for ( int i = 0; i <= (tam_str1 - tam_str2); i++ ){
    p1 = inicio_1 + i;
    p2 = inicio_2; 
    while (p2 <= fim_2 ){
      if (*p1 != *p2) break;      
      p1++; p2++;
      }
    
    if ( p2 > fim_2){ // fim_2 rerpesenta ultimo caracyer da string2
      printf("%s contem %s\n", str1, str2);
      return 0;

    }

    }

  }

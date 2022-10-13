#include <stdio.h>

int main(void) {
  /* Strings são "dicioários de vetores????". Sua declaração é igual a de vetores

  Declaração
  char nome[quantidade_caracteres] = {'ele', 'men', 'tos', '\0'};

  '\0' delimita o fim da string. Se pode também declarar apenas uma string com aspas duplas e sem chaves
  Não se imprime nada além do \0*/
  
  char nome[] = "String"; /*Sempre tem que cosiderar que o ultimo 
    caracter da quantidade declarada necessariamente tem que ser o '\0'
    Se declarar string com 10 você só poderá usar 9 espaços de memória

  Alterar atributos em stringbasta declarar a posição do que se quer mudar
*/
  char str[6] = "Teste";
  str[0] = 'L'; // Substitui a primeira posição por 'L'

  /* Entrada de dados em uma string 
  char string[256];
  gets(string);
  scanf("\s", string);
  fgets(string, 256, stdin); //256 é o tamanho da string, é o método mais seguo para declaração
  EXEMPLO:
*/
  char nome1[20];
  char senha[20] = "12346";

  //gets(nome1); // Não bom pq pode estrapolar limite de caracteres
  //scanf("%s", nome1); // Mesmo problema do gets e nao poe \0 se nao ter espaço
  //scanf("%20s", nome1); //  limita quantos caracterres sao pegos mas não poe \0 (foi até o 20 e não 19)
  fgets(nome, 20, stdin); // Perfeito, sem erros, segue as regras, um corvinal de nascença. Ele corta caracteres após o limite

  printf("Nome: %s\n", nome1);
  printf("Senha: %s\n", senha);

  //STRLEN retorna a quantiade de caracteres lidos

  char nome[10];
  char senha[20] = "12346"

  fgets(nome, 10, stdin);
  int tamanho = strlen(nome); // biblioteca string.h
  for (int i=0; i <= tamanho; i++){
    switch(nome[i]){
      case '\0':
        printf("nome[%d] - \\0\n", i); // precisa por 2 barras "\\" para escreve barra e ignorar comando
        break;
      case '\n':
        printf("nome[%d] - \\n\n", i);
        break;
      default:
        printf("nome[%d] - %c\n", nome[i]);
        break;
      // "\n" é deault como para bits do tamanho da string não enxidos. ultimo caracter porém se não há espaço ele pode ser dispensado
    }
  }

    // Uso da STRLEN STRCY STRCAT STRCMP
    //STRLEN devolve o tamanho da string ate o 0
    int tamanho = strlen(nome);
    //STRLEN copia uma string
      char* strcy(char* destino, char* origem); // Destino tem que ser igual u maior em tamanho que a oriem
   //STRCAT cocnatena strings(*)
    char* strcat(cha* destino, char* origem);
    //STRCMP compara posições de duas strings. Caso todas as strings sejam iguais ela retornara um 0, se str1 maior que str2 retrorna -1 e por fim caso str2 maior que str1 retorna 1. Compara via Tabela ASCII e nela há letras maiusculas
  char str1[];
  char str2[];
  int strcmp(char* str1, char* str2);
  
  return 0;
}
#include <stdio.h>


// AULA SOBRE PONTA DE PICA

int main(void) {

  /* Ponterios armazenam endereços de memória e não dados numericos
    porem nesse endereço existira dados.
    Um ponteiro pode indicar ´para outro ponteiro
    Um ponteiro so aponta para endereços de mesmo tipo (ponteiro inteiro aponta para um endereço que possui um dado inteiro)
    Se declara ponteiro: tipe *variável; 
      O ponteiro (*) pode aparecer em qualquer posição entre o tipo e a variável
    Ponteiros podem ter valores declarados durante a inicialização
    Ponteiro sem inicialização apontam para valor aleatório

Operador "&" retorna o endereço de uma variável em hexadecimais

        */

  int i = 20;
  int *ptr;

  ptr = &i;
  // So se acessa HEAP com ponteiros. Não é os ponteiros que possem valor, eles so apontam para o valor mas não se torna ele
  // Pode se atribuir o valor NULL para um ponteiro, NULL é um constante que por acaso vale 0
  // Ao se chamar um ponteiro se faz *ponteiro para evitar confundir com o * de multiplicação
  // Ao se declarar um ponteiro e atribuir um endereço de variavel d etipo diferente, o complidaor ira aceitar porém vai ficar cagado
  //Ponteiros podem receebr valores apontados por outro pontiero desde que sejam, do mesmo tipo
  int i = 10;
  int j = 20;
  int *p1 = &i;
  int *p2;
  *p2 = *p1;
  printf("i = %d, j = %d\n", *p1, j);
  return 0;

  // ARITMETICA CO PONTEIROS
  /* Se opera apenasos ponteiros, nao os valores que eles indicam
    So é possivel realizar somas ou subtrações ao usar incrementos
      ++ ou -- e faz apontar para a próxima/antecessora posição
    Se modifica apenas as posições/endereços
    So se aplica a ponteireos que se tem controle do posicionamento dos dados na memmória
    Se se incrementa ponteiros inteiros, quer dizer que se está add 4 bits
}
#include <stdio.h>

// Pode se criar vetores para armazenas multiplos dados de um meso individuo.
// Com o uso de estruturas se agrupa os dados de vetores comoum "agrupaeno de
// dicionarios"

// " struct name{...}; " define a estrutura e seu nome.Se declara as structs
// fora de funções paraque possam ser usadas em varias funções

struct aluno {
  int mat;
  char nome[10];
  float n1, n2;
};

int main1(void) {
  // dentro da função se cria as variaveis dad struct com
  // struct nome_struct variável
  struct aluno aluno1;

  // 1 vetor de structed que cria N variaveis em si
  struct aluno aluno[10];

  // add valores mat, nome, n1, n2
  struct aluno aluno2 = {10, "Maria", 5, 8};
  return 0;
}
typedef struct /*ponto*/ { /* ponto_type{x ,y}*/
  int x;
  int y;
} ponto_type; // pode se declarar o nome so no final, deixando a estrutura como
              // " typedef struct {...}name_type; "

// Pode-se botar struct dentro de outras

typedef struct {
  ponto_type p1;
  ponto_type p2;
} reta_type; // retatype{p1, p2}

int main2(void) {
  ponto_type p = {0,
                  0}; // so se pode atribuir valores na declaração da variável
  ponto_type p2;
  p2.x = 1; // poe valores nos pontos de variaveis X e Y declarados anteriorente
  p2.y = 1;
}

// Dentro das chaves se delimita os valores das variaveis da struct
// EX: reta_type r1 = {p1, {1, -1} };

int main(void) {
  main1();
  main2();
}
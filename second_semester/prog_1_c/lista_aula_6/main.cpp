#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cmath>
#include <stdio_ext.h>

void operation( int num1, int num2, int operacao, char simbolo)
{
  if (simbolo == '+' )
    return num1 + num2;
  else (simbolo == '-')
    operacao = num1 - num2;
  else (simbolo == '/')
    operacao = num1 / num2;
  if (simbolo == '*')
    operacao = num1 * num2;
}
int main() {
/*1 - Escreva uma função que receba um número e retorne o seu fatorial:
n! = 1 * 2 * 3 * ... * (n - 2) * (n - 1) * n.
  int num, contador, valors;
  printf( "Insira o número: " );
  scanf( "%d", &num );
  contador = 0;
  while (contador < num){
    valors = num - contador; 
    printf( "%d\n ", valors);
    contador = contador + 1;
  }

2 - Elabore uma função para verificar se um número é um quadrado perfeito. Um
quadrado perfeito é um número inteiro não negativo que pode ser expresso como o
quadrado de outro número inteiro. Exemplos: 1, 4, 9 são quadrados perfeitos,
enquanto 3, 5 e 10 não são.
  int num, num3;
  float num1, num4;
  printf( "Insira um numero inteiro: " );
  scanf( "%d", &num );
  num3 = sqrt(num);
  num4 = sqrt(num);
  if ( num3 == num4)
    printf( "O valor %d e um quadrado perfeito", num) ;
  else
    printf( "O valor %d nao e um quadrado perfeito", num );

3 - Escreva uma função que receba dois valores numéricos e um símbolo. Esse
símbolo representará a operação que se deseja efetuar com os números. Assim, se
o símbolo for “ + ”, deverá ser realizada uma adição, se for “ − ”, uma subtração, se
for “/”, uma divisão, e, se for “*”, será efetuada uma multiplicação. Retorne o
resultado da operação. */
  int num1, num2, operacao;
  char simbolo;
  printf( "Digite o primeiro numero: ");
  scanf( "%d", &num1 );
  printf( "Digite o segundo numero: ");
  scanf( "%d", &num2 ); 
  __fpurge( stdin );
  printf( "Digite o simbolo: ");
  scanf( "%c", &simbolo );

  operation( num1, num2, operacao, simbolo );

  printf("%d", operacao );
  

  return 0;

  
}
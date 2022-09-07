#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  // 1 - Faça um programa que leia dois números e mostre qual deles é o maior.

  int x, y;
  printf("Digite 2 numeros: ");
  scanf("%d\n%d", &x, &y);
  if (x > y)
  {
    printf("O primeiro valor (%d) e o maior!", x);
  }
  else
  {
    printf("O segundo valor (%d) e o maior!", y);
  }

  // 2 - Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.

  int a, b;
  printf("Digite 2 numeros: ");
  scanf("%d\n%d", &a, &b);
  if (a > b)
  {
    printf("O primeiro valor (%d) e o maior!", a);
  }
  if (a < b)
  {
    printf("O segundo valor (%d) e o maior!", b);
  }
  if (a == b)
  {
    printf("Numeros iguais");
  }

  // 3 - Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.

  int c;

  printf("Insira um numero: ");
  scanf("%d", &c);
  if (c % 2 == 0)
  {
    printf("O numero e par");
  }
  else
  {
    printf("O numero e impar");
  }

  // 4 - Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
  // - Homens: (72,7 * h) – 58
  // - Mulheres: (62,1 * h) – 44,7

  int d;
  float e, calculo;

  printf(" Digite 1 caso seu sexo seja feminino e 2 caso seja masculino \n");
  scanf("%d", &d);
  printf("Digite sua altura: \n");
  scanf("%f", &e);

  if (d == 1)
  {
    calculo = (62.1 * e);
    printf("Seu peso ideal e: %f", calculo);
  }
  else
  {
    calculo = (72.7 * e);
    printf("Seu peso ideal e: %f", calculo);
  }

  // 5 - Faça um programa que informe o mês de acordo com o número digitado pelo usuário. Exemplo: Entrada = 4. Saída = Abril.

  int f;

  printf("Insira o digito que representa o mes que seja o nome \n");
  scanf("%d", &f);

  if (f == 1)
  {
    printf("O mes referente ao digito e Janeiro!");
  }
  if (f == 2)
  {
    printf("O mes referente ao digito e Fevereiro!");
  }
  if (f == 3)
  {
    printf("O mes referente ao digito e Marco!");
  }
  if (f == 4)
  {
    printf("O mes referente ao digito e Abril!");
  }
  if (f == 5)
  {
    printf("O mes referente ao digito e Maio!");
  }
  if (f == 6)
  {
    printf("O mes referente ao digito e Junho!");
  }
  if (f == 7)
  {
    printf("O mes referente ao digito e Julho!");
  }
  if (f == 8)
  {
    printf("O mes referente ao digito e Agosto!");
  }
  if (f == 9)
  {
    printf("O mes referente ao digito e Setembro!");
  }
  if (f == 10)
  {
    printf("O mes referente ao digito e Outubro!");
  }
  if (f == 11)
  {
    printf("O mes referente ao digito e Novembro!");
  }
  if (f == 12)
  {
    printf("O mes referente ao digito e Dezembro!");
  }

  // 6 - Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado.

  int g, h, i, j;

  printf(" Insira o digito referente a operacao que deseja realizar: \n 1 - Soma\n 2 - Subtracao\n 3 - Multiplicacao\n 4 - Divisao\n");
  scanf("%d", &g);

  switch (g)
  {
  case 1:
    printf("Insira 2 numeros: \n");
    scanf("%d\n%d", &h, &i);
    j = (h + i);
    printf(" O valor da soma e: %d", j);
    break;
  case 2:
    printf("Insira 2 numeros: \n");
    scanf("%d\n%d", &h, &i);
    j = (h - i);
    printf(" O valor da subtracao e: %d", j);
    break;
  case 3:
    printf("Insira 2 numeros: \n");
    scanf("%d\n%d", &h, &i);
    j = (h * i);
    printf(" O valor da multiplicacao e: %d", j);
    break;
  case 4:
    printf("Insira 2 numeros: \n");
    scanf("%d\n%d", &h, &i);
    j = (h / i);
    printf(" O valor da divisao e: %d", j);
    break;
  default:
    printf("Valor nao correspondente a nenhuma operacao disponivel!");
  }

  // 7 - Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas não simultaneamente pelos dois.

  int k;

  printf("Insira um numero: ");
  scanf("%d", &k);
  if ((k % 3 == 0 || k % 5 == 0) && !(k % 3 == 0 && k % 5 == 0))
  {
    printf("O numero e divisivel ou por 3 ou 5 mas nao por ambos ");
  }
  else
  {
    printf("O numero e divisivel tanto por 3 quanto por 5");
  }

  return 0;
}
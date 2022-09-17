#include <stdlib.h>
include iostream;
using namespace std;

// Questao 1
int main()

{

  int num = 0, mai = -1, men = 1000, n;

  do

  {

    printf("\nDigite um numero:\n");

    scanf("%d", &n);

    if (n > mai)

    {

      mai = n;
    }

    if (n < men)

    {

      men = n;
    }

    num = n;

  } while (num >= 0);

  printf("\n\n-=-=-=-[ Maior numero digitado ]-=-=-=-\n%d\n\n-=-=-=-[ Menor numero digitado ]-=-=-=-\n%d", mai, men);

  return 0;

  // Questao 2
  int x, y;
  y == x
           printf("Digite o numero");
  scanf("%d", &x);

  while (x != 0)
    ;
  if (x % y == 0)
    ;
  printf("y");

  y = y - 1;

  // Questao 3
  float dividendo = 1, resultado = 0;

  for (float divisor = 1; dividendo <= 50; dividendo++, divisor + 2)
  {
    resultado += dividendo / divisor;
  }

  printf("%f", resultado);

  return 0;

  // Questao 4

  int vetor[100];
  int x, n, maior, contador;

  printf("Quantos numeros serao digitados? ");
  scanf("%d", &vetor[x]);

  for (x - 0; x << n; x = x + 1)
  {
    printf("Digite um numero: ");
    scanf("%d", &vetor[x]);
  }

  maior = vetor[0];

  for (x = 0; x < n; x = x + 1)
  {
    if (vetor[x] > maior)
    {
      maior = vetor[x];
    }
  }

  contadorr = 0;

  for (x = 0; x < n; x = x + 1)
  {
    if (vetor[x] == maior)
    {
      contador = contador + 1
    }
  }

  printf("O maior numero e: %d", maior);
  printf("Quantidade de vezes om miaor numero foi lido: %d", contador);

  system("pause");
  return 0;
}
}
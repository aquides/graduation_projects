#include <iostream>
#include <stdio.h>


using namespace std;

int impares(int n)
{
  int qtd;

  if(n%2!=0){
    qtd += + 1;
    return qtd;}

}


int main()
{
  int n, b, qtd;
  while ( n != 000 ){
    printf("Digite um numero, quando quiser para digite 0001\n");
    scanf("%d", &n);
    qtd = impares(n);
  }

  printf("%d", qtd);
  return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main(void) {

2 - Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.

  int num1,num2;
  printf( "Digite 2 numeros: " );
    scanf( "%d\n%d", &a, &b );
  if ( num1 == num2 )
    printf( "Numeros iguais" );  
  else  // if e else contam como um unico comando e por isso se pode tirar as chaves
	else
		printf( "%d e o maior \n", (num1 > num2 ? num1:nume2)) // Mais resumido


	/*if ( num1  > num2 ) 
    	printf( "O primeiro valor (%d) e o maior!", num1  );
  
  	else
    	printf( "O segundo valor (%d) e o maior!", num2 );*/
  
  /* int x=1, y=2;
	x = (x > y ? 0 : x+1) == if {x>y x=0 else x+1; */


 // 3 - Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.

  int num1;

  printf( "Insira um numero: " );
    scanf( "%d", &num1 );

    printf( "%d e %s\n", num1, ( 0 == num1 % 2 ? "par" : "impar" ) ); // ? == If e : == else

  

 // 4 - Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
 // - Homens: (72,7 * h) – 58
 // - Mulheres: (62,1 * h) – 44,7

  int d;
  float altura, peso;
  char sexo;

  printf( " Digite o sexo (h/m): \n" );
    sexo = getchar();

  switch(sexo){
	case 'h': 
  		printf( "Digite sua altura (metros): \n" );
    			scanf( "%f", &altura);
		peso= ( altura * 72.7 - 58 );
    		break;
	case 'm':
  		printf( "Digite sua altura (metros): \n" );
    			scanf( "%f", &altura);
		peso= ( altura * 62.1 - 44.7 );
    		break;
	default:
		printf( "Opção invalida\n" )	
		return 1; // Se for invalido nao imprime o que esta abaixo
}

  printf( "Peso ideal para %s de altura %.2f é %2.fKg\n", ( 'm' == sexo ? " uma mulher" : "um homem"), altura, peso_ideal ); // .2 delimita apenas 2 casas decimais

 

 //7 - Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas não simultaneamente pelos dois.

  int num;

  printf( "Insira um numero: " );
    scanf( "%d", &num );
  printf( "%d %s é divisivel por 3 ou 5 exclusivamente. \n", num, ( 0 == num % 3 ^ 0 == num % 5 ? "" : " não" ) );

*/ if (( 0 == num % 3 ^ 0 == num % 5 == 0 ) // ^ ou exclusivo
    printf( "%d numero e divisivel ou por 3 ou 5 mas nao por ambos.\n ", num );
  else
    printf( "%d e divisivel tanto por 3 quanto por 5. \n", num ); */
 
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    /*1 - Escreva um programa que leia um valor inteiro pelo teclado e imprima a mensagem:
    Valor lido: n onde n é o valor lido pelo programa.*/
   
    //TYPE
    int x;
    
    //CODE
    printf("Digite o valor de x ");
        scanf( "%d", &x );
    printf( "O valor de x é %d\n: ", x );
    
    /*2 - Faça um programa que leia um valor float pelo teclado e depois o imprima
        usando o formato “%f”, veja o que aconteceu.*/
   
    //TYPE
    float y;
        
    //CODE
    printf("Digite o valor float ");
        scanf( "%f", &y );
    printf( "O valor de y é %f\n: ", y );
    
    /*3 - Faça um programa que solicite a entrada do dia/mês/ano e a hora:minutos,
        depois imprima o resultado na seguinte formatação:
        Data: DD/MM/AA
        Hora: HH:mm*/
    
    //TYPE

    int d,m,a,h,mm;
        
    //CODE
    printf("Digite o dia ");
        scanf( "%d", &d );
    printf("Digite o numero do mes ");
        scanf( "%d", &m );
    printf("Digite o ano ");
        scanf( "%d", &a );
    printf("Digite o hora ");
        scanf( "%d", &h );
    printf("Digite o minuto ");
        scanf( "%d", &mm );
    printf( "Data:%d/%d/%d\nHora: %d:%d", d,m,a,h,mm );
   
   /*4 - Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha. 
       Use um único comando printf() para isso.*/

    //TYPE

    char a,b,c;
        
    //CODE
    printf("Digite o primeiro caracter ");
        scanf( "%c", &a );
    printf("Digite o segundo caracter ");
        scanf( "%c\n", &b );
        fflush(stdin);
    printf("Digite o terceiro caracter ");
        scanf( "%c\n", &c );
    printf("O primeiro caracter: %c\nO segundo caracter: %c\nO terceiro cartacter: %c\n", a,b,c);
    
    /*5 - Faça um programa que leia dois valores do tipo float. Use um único comando deleitura para isso. 
        Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.*/
    
    //TYPE
    float f,g;
        
    //CODE
    printf("Insira o primeiro e segundo valor em ordem:\n");
        scanf("%f\n%f", &f, &g);
    printf("O segundo valor e %f e o primeiro %f", g,f);
    
    return 0;
}

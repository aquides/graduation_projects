#include <stdio.h>
#include <stdlib.h>

int main()
{

    setlocate(LC_ALL, "Portuguese");
    int x = -10, y = 1;
    char c = 'A';
    char d = 65;
    float r = 1;

    printf("Ola Mundo");
    printf("%d\n", x);
    printf("");

    //putchar


    // usando %Type

    char valor1 = 'z';
    char valor2 = 'b';
    printf("Zarado\n");
    printf("%c, %c", valor1, valor2);

    //Scanf

    int x, y;
    printf("Digite o valor de x ");
    scanf( "%d", &x );
    printf( "O valor de x é %d\n ", x );

        // Multiplos valores

    printf("Digite os valores de X e Y ");
    scanf( "%d %d", &x. &y );
    printf( "O valor de x é %d\n ", x );
    printf( "O valor de y é %d\n ", y );

    // Criando Strings

    char nome1[] = "Adalberto";
    char nome2[50]; // Limita tamanho string quando nao especificada

    printf( "Insira seu nome " );
    scanf( "%s", nome2 );
    printf( "Seu nome é %s\n ", nome2 );
        // se for passado varias palavras o scanf trunca apos o espaço e nao bota tudo na mesma variavel
        // para evitar isso deve se usar varias variaveis ou outras funçoes

    char nome[50];
    int idade;
    char genero;

    printf( "Digite seu nome: ");
    scanf("%s\n", nome);

    printf( "Digite sua idade: ");
    scanf("%int\n", &idade);
    fflush(stdin);

    printf( "Digite seu genero (M/F): ");
    scanf("%c\n", &genero);

    printf( "\n Seu nome é %s\n" );
    printf( "\n Sua idade é %d\n" );
    printf( "\n Seu genero é %c\n" );

    return 0;

}

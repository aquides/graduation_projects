#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 3;
    int y = 5;

    //OPERADORES LÓGICOS

    /*(x == y) || (x == 3) OU
    ((x == y) && (x == 3)) E

    if ((x == y) && (x == 3)) // Se ... Entao
    if (!(x == y) && (x == 3)) {   //Negação
        printf("Resultado e verdadeiro! \n");
    }
    else {    // Se nao entao
        printf("O resultado e falso!\n");
    }*/

    // OPERADORS BIT A BIT

    /*printf("%d\n", x);
    printf("%x\n", ~x); // inverte bits e da o copleento

    printf("%d\n", x);
    printf("%d\n", ~x); // Mostra o valor em binario

    printf("%d\n", x);
    printf("%d\n", ~x +1 ); // Mostra o cotrário

    int x = 7;
    int y = 12;
    char c = 'A';

    printf("%d\n", (x, y); // soma os bits
    printf("%d\n", (x, y); // inverte e soma os bits

    printf("%c\n", c);
    printf("%c\n", c | 32); // Mostra a posiçao em exadecimal do caracter inverso (minusculo ou maiusculo).
                            // Transforma strings de maiusculas para minusculas

    printf("%d\n", x ^ y ); // Igual quando abos sao 0

    printf("%d\n", (x << 2) ); // desloca 2 para a esquerda
    printf("%d\n", (x << 2) >>1 ); // desloca 2 para a esquerda e 1 para direita

    // OPERADORES PRE E APOS INCREMENTO/DECREMENTO

    int x = 7;
    int y = ++x;
    int z = x++;

    //pre
    printf("x = %d\n", x ); //
    printf("y = %d\n", y ); //
    //pos
    printf("x = %d\n", x ); //
    printf("z = %d\n", z ); //

    // TESTE EXERCICIOS DEFININDO CONDIÇAO

    if (x > y + 1); // soma ocorre antes da comparaçao

    if (x == y) {
        printf("OK\n");
    }
     else {
      printf("OK\'NT\n");
    }

    // CONTROLES CONDICIONAIS: IF

    int num;
    printf("DIGITE UM NUMERO INTEIRO: ");
    scanf("%d", &num);

    printf("DIGITE UM NUMERO INTEIRO: ");
    scanf("%d", &x);
    printf("DIGITE OUTRO NUMERO INTEIRO: ");
    scanf("%d", &y);

    if (num > 10){
        printf("O numero e maior que 10.\n");
    }
        else{
            printf("O valor nao e superior a 10.\n");
        }
        printf("s\n", x==y ? "Valores iguais" : "Valores diferentes\n"); // expressao condicional em uma linha



    // COMANDO SWITCH


    printf("DIGITE UM NUMERO INTEIRO: ");
    scanf("%d", &x);
    printf("DIGITE UM NUMERO INTEIRO: ");
    scanf("%d", &x);
    printf("DIGITE UM NUMERO INTEIRO: ");
    scanf("%d", &x);
    switch(x) {
        case 1:
            printf("UM\n");
            break;
        case 2:
            printf("DOIS\n");
            break;
        case 3:
            printf("TRES\n");
            break; // imprime apenas o caso especifico
        default:
            printf("Valor Invalido");
    }

     int opcao:
    printf("Operacoes\n");
    printf("1 Soma\n");
    printf("2 Subtraçao\n");
    printf("Opçao\n");

    scanf("%d", opcao);
    switch(opcao) {
        case 1:
            printf("Soma\n");
            break;
        case 2:
            printf("Subtraçao\n");
            break;
        case 3:
            printf("Opcao\n");
            break; // imprime apenas o caso especifico
        default:
            printf("Valor Invalido");
    }


    // GETS()
    char nome[10];
    char sobrenome[10];
    printf("Seu sobrenome");
    fgets(sobrenome, 10, stdin); // Tende a ignorar o tamanho da string

    printf("Seu nome");
    fgets(nome, 10, stdin); //recebe valor como scanf mas sem bugar a memoria

    */

    gets(sobrenome); // Tende a ignorar o tamanho da string
    gets(nome); //recebe valor como scanf mas sem bugar a memoria
    printf("Seu sobrenome");
    printf("Seu nome");
    printf("Seu nome e: %s %s\n", nome, sobrenome);

    printf("%d\n", nome[6]); // escolhe a posiçao


    printf("\nHello world!\n");
    return 0;
}

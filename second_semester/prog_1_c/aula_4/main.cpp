#include <iostream>

using namespace std;

int main()
{
    int i = 0;

    while ( i < 5 ){
        printf( "%d\n", i);
        i++; // add 1
    } // imprime de 0 ate 4


    int i = 0;

    while ( i < 5 ){
        i++; // // imprime de 1 ate 5 com o incremento antes do printf
        printf( "%d\n", i);
    }

    while ( i < 5 ){
        printf( "%d\n", i++); // imprime 0 a 4
    }

    while ( i < 5 ){
        printf( "%d\n", ++i); // imprime 1 a 5
    }


    int i = 0;
    int j = 5;

    while ( i < 5 && j > 0 ){
        printf( "%d\n", i++, j );
        j--;
    }

    while ( i < j ){
        printf( "%d\n", i, j );
        i++;
        j--;
    }



    int i;
    int j;
    for ( i = 0; i < 5; i++ )
        printf( "%d\n", i );


    for ( i = 0, j = 5; i <= j; i++, j-- ){ // ; separa inicio/condicao/atualizcao. , separa diferentes inicio/condicao/atualizcao
    printf( "( %d, %d )\n", i, j );
    }


    for ( int i = 0, j = 5; i < j; i++, j-- ){ // declara o tipo da variavel dentro do for e a variavel so existe dentro do for
    printf( "( %d, %d )\n", i, j ); // Imprime o penultimo valor pois o ultimo nao atende a condiçao
    }

    printf( "Fora do for ( %d,%d )\n", i, j ); // Vai imprimir o ultimo valor atualizado.


    int i = 0;
    do{
        printf( "%d,\n", i++ );
    } while ( i < 5 );


    int i;
    for (i = 0; i < 5; i++) {
        if (i == 2) // if usaado para delimitar quando acabar o loop
        break;
        printf(“%d\n”, i);
}


    int i = 10;
    while (i > 0) {
        printf(“%d\n”, i--);
        if (i == 5) // if usaado para delimitar quando acabar o loop
        break;
}

    int i;
    for (i = 0; i < 5; i++) {
        if (i == 2)
            continue;
        printf(“%d\n”, i);
}


    int i = 10;
    while (i > 0) {
        if (i == 5) {
            continue;
            i--;
        }
        printf(“%d\n”, i--);
}

    cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>

using namespace std;

    // exercocop 2 ano bisexual

int bissexto( int ano )
{
    if (( 0 == ano % 4 ) && ( 0 != ano % 100 || 0 == ano % 400 ) )
        return 1;
    // else não necessario quando um IF termina em Return para chamar outro Return
    return 0;
    // return (( 0 == ano % 4 ) && ( 0 != ano % 100 || 0 == ano % 400 ) ? 1 : 0 ) forma reduzida. Retorna 1 ou 0 se / ou

}
int main()
{
    // exercocop 2 Ano bissexual
    int ano;
    printf( "Digite um ano: " )
    scanf( "%d", &ano )
    printf( "O ano %d %s bissexto\n", ano, ( bissexto(ano) ? "é" : "nao e" ))

    cout << "Hello world!" << endl;
    return 0;
}

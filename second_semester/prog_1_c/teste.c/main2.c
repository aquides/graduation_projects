
#include <stdio.h>


int main(){
    srand(time(NULL));
    int resultadoF1 = 0;
    int resultadoF2 = 0;
    while (resultadoF1 == resultadoF2){
      resultadoF1 = rand() % 4;
      resultadoF2 = rand() % 4;
    }
    printf("%d\n%d", resultadoF1, resultadoF2);

}
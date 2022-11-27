#include <stdio.h>

struct atleta {
  char nome[100], esporte[75];
  int idade, altura;
};

/* 
int q2(){
  char nome[100], esporte[75];
  int idade, altura;
  int contador = 1;

  while (contador < 6) {
    printf("Qual os 2 primeiros nomes do atleta?\n");
    scanf("%s", &nome);
    fflush(stdin);
    printf("Qual o esporte que o atleta pratica?\n");
    scanf("%s", &esporte);
    printf("Qual a idade, em número inteiro, do Atleta??\n");
    scanf("%d", &idade);
    printf("Qual a altura, em centimetros, do Atleta??\n");
    scanf("%d", &altura);
    struct atleta atleta = {nome, esporte, idade, altura};
    
    contador += 1;
  }
}   */


int q3()
{
    FILE *fp;
    int linhas = 0;  
    char arquivo[100];
    char c;

    printf("Insira o nome do arquivo\n ");
    scanf("%s", arquivo);
  
    fp = fopen(arquivo, "r");
  
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') 
            linhas = linhas + 1;
  
    // Close the file
    fclose(fp);
    printf("O arquivo possui %d linhas\n ", linhas);
  
    return 0;
}
int main(void){
  //q2();ñ
  q3();
  return 0;
}
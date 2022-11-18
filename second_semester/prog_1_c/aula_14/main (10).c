#include <stdio.h>
#include <time.h>



int brandomicos() {
  int x;

  // NUMEROS BRANDOMICOS
  srand(time(NULL)); // escolhe a seed do random com base na hora tual
  x = random() % 100; // printa numeros random na faixa de 0 - 100
  printf( "%d\n", x);
  
  x = random() % 100;
  printf( "%d\n", x);

  return 0;
}



// FILES

int files(){
  /* Arquivos são sequencia de dados em bytes armazenado em um meio externo. Se é possivel ler e escrever em tais arquivos

Ao se abrir um arquivo se associa um ponteiropara o endereo de memoria do arquivo.Sempre deve-se FECHAR o arquivo após a utilização. 
  FILE *name; 
  FILE *fp; // ponteiro aponta para onde as operações ocorreram através dele
  Para se abrir u arquivo se utiliza FOPEN e se declara o tipo, ponteiro nome arquivo, tipo ponteiro do modo 
  FILE *fopen( char * "nome_arquivo", char *"modo"); // Dependendo do modo se pode ler, editar e especificar se é texto ou binário
   Caso não seja possível abrr, s retorna NULL ou o endereço no ponteiro inicial. 
    Caso haja problemas na abertura, se pode abandonar o programa com  a função exit():
  type exit( type nome_arquivo) 
  void exit(int código_erro); // sai da função main e fecha todos os arquivos
   MODOS DE ABERTURA DE ARQUIVOS
    r: sempre se referira a leitura, apenas arquivos existentes
    w: para escrita, subtituindo os dados existentes. Caso o arquivo nao exista ele é criado
    a: o que foi escrito sera adicionado no final do arquivo    r+: le e escreve caso oa rquivo ja exista
    w+: le  eecreve substituindo os dados caso oa rquivo ja existice
    a+: le e escreve com os dados sendoa dicionados ao final
    _b: sempre que a letra estiver acompanhada por B, significa que o arquivo está no modo binário  */
  /* FECHAMENTO DE ARQUIVO:
    Se deve fechar os arquivos pos uso para se limpar o buffer da memória e não sobrecarrehar o sistema. Se usa o fclose()
    type fclose( FILE *nome_file );
  ESCREVER CARACERES:
    Se usa FPUTC( type codigo_caracter, FILE * nome_file)
  int fputc(int caracter, FILE *fp);
Para se ler se usa FGTEC. Retorna o caracter lido ou EOF (constante definida com stdio) caso haja um erro
int fgetc(FILE *fp)
  FGETS/FSCANF:
    Se adiciona valores via teclado e se adiciona no arquivo
    fgets( variavel, sizeof(), n, p) */
  FILE *fp;
  char nome[30];

  //printf("OLA");

  if ((fp = fopen("nomes.txt", "r") == NULL)){
    fprintf( stderr, "Erro na abertura\n"); // STDERR cria uma saida de erro
    exit(1);
    // cat > file.txt CRIA ARQUIVO NO CONSOLE
  }
  while (1) {
    if (fgets( nome, sizeof(char) * 30, fp) == 0)
      break;// 30 é o limite, fp o ponteiro
    printf("%s\n, nome");
  }
  fclose(fp);
  
    
  /*FPRINTF
    A said dos valores interiores são gravadas no arquivo
    */

  return 0;
  }

//FGETC le 1 string, FGETS varias
  


int main(void){
  files();
  //brandomicos();

  return 0;
}

/* TRABALHO FINAL:
  Simular 6 partidas dos grupos da Copa do Mundo. placares deverão ser brandomicos e deve se usar probabilidade para os definir. 
  
  ALem disso deve se indicar os paises que passaram de fase e fazer o cruzamento de grupos apartir de um ranking para saber quem vai passar por cada fase e quem irá infrentar de acordo com a chave do grupo. 
  
  Usar colocação ranking FIFA como base para criar a probabilidade de gols/resultado da partida

IDEIA - atribuir peso para a media de gols de cada pais e o ranking dele pela FIFA. Após isso calcular isoladamente o potencial de gols e comparar os resultados dos times entre si 
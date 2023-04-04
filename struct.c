#include <stdio.h>
#include <string.h>

//Limpa o buffer do teclado
void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

// Sub Struct (Struct dentro de outro struct)
typedef struct {
    char rua[70];
    float cep;
    char bairro[300];
    char cidade[300];
    char estado[300];
    int numero;
} endereço_meu_tipo;


// struct principal
struct aluno_escola_estrutura{
    char nome[30];
    int ra;
    char curso[50];
    endereço_meu_tipo endereço;
} aluno;



    
// criar função principal
int main()
{

    //Prenencher dados com o strcpy do struct aluno
    strcpy(aluno.nome, "Najla Martins Pereira de Souza");
    aluno.ra = 123456789;
    strcpy(aluno.curso, "Fisioterapia");
    
    //Preencher dados com scanf's
    printf("digite o nome da rua\n");
    scanf("%s", aluno.endereço.rua);
    flush_in();

    printf("digite o cep\n");
    scanf("%f", &aluno.endereço.cep);
    flush_in();
    
    printf("digite o nome do bairro\n");
    scanf("%s", aluno.endereço.bairro);
    flush_in();
    
    printf("digite o nome da cidade\n");
    scanf("%s", aluno.endereço.cidade);
    flush_in();
    
    printf("digite o nome do estado\n");
    scanf("%s", aluno.endereço.estado);
    flush_in();
    
    printf("digite o numero da casa\n");
    scanf("%i", &aluno.endereço.numero);
    flush_in();
    
    
    //imprimir resutados
    printf("NOME: %s\n", aluno.nome);
    printf("ra: %i\n", aluno.ra);
    printf("curso: %s\n", aluno.curso);
    printf("rua: %s\n", aluno.endereço.rua);
    printf("cep: %f\n", aluno.endereço.cep);
    printf("bairro: %s\n", aluno.endereço.bairro);
    printf("cidade: %s\n", aluno.endereço.cidade);
    printf("estado: %s\n", aluno.endereço.estado);
    printf("numero da casa: %i\n", aluno.endereço.numero);
    
    
}
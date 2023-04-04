#include <stdio.h>
#include <stdlib.h>

int main() {

    int qda, i;

    float *notas, media, mav3, mediafinal, total_mav3 = 0, total_aprovados = 0;

    char nome[40];

    notas = (float*) malloc(3 * sizeof(float));


    // Digitar a  quantidades de alunos

        printf("Digite a quantidades de alunos: ");
        scanf("%i", &qda);
        

    // criar loop
        for (i = 1; i <= qda; i++){

            // ler nome e notas do usuario
            printf("Digite o nome do %i aluno : ", i);
            scanf("%s", nome);

            printf("Digite a nota da AV1: ");
            scanf("%f", &notas[0]);

            printf("Digite a nota da AV2: ");
            scanf("%f", &notas[1]);

    // calcular a média das notas
    
        media = (notas[0] + notas[1]) / 2;

    // criar uma condição para aprovado

    if (media>=6){ printf("\n %s esta aprovado!!!\n", nome);

    // imprimir a media de aaprovação de cada aluno

    printf("\n Sua media foi %0.1f\n\n", media);

    // acumular a média de aprovação de cada aluno

    total_aprovados += media;
    }

    // criar uma condição para Abaixo da média
    
    else if (media<6) {printf("""%s esta com sua media = %0.1f, tera que fazer a AV3. Se o aluno ja fez, por favor digite a nota da AV3: \n""", nome, media);
        scanf("%f", &notas[2]);
        
        mav3 = (notas[0] + notas[1] + notas[2]) / 3;

        if (mav3>=6){ printf("\n\n %s  esta aprovado agora, pode ficar sossegado!!!\n", nome);}

        printf(" \n\na media final de %s agora e %.01f\n", nome, mav3);
        
        // acumular a MAV3 de cada aluno

        total_mav3 += mav3;
        
        }

    free(notas);

    }

    // calcular a media total final de todos os alunos
    
    if (total_aprovados > 0)
    {
        mediafinal = (total_aprovados + total_mav3)/ qda; //total_aprovados / (qda - total_mav3);
    
    printf("\nMedia final dos %d alunos: %.1f\n", qda, mediafinal);

  }}

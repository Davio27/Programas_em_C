/*================================================================
 Descricao: O programa calcula e mostra o resultado de uma
            equação do segundo grau.
================================================================*/
 #include <stdio.h>
 #include <math.h>
 int main(){
    float ta, tb, tc, delta, raiz, x1, x2, baska=0;

while (baska=1)
{

 printf("\n");
 printf("Formula de Baskara\n");
 printf("\n");

    printf("Digite o valor do termo a: ");
        scanf("%f", &ta);

            printf("Digite o valor do termo b: ");
                scanf("%f", &tb);

                    printf("Digite o valor do termo c: ");
                        scanf("%f", &tc);


                        delta = (tb*tb) - (4*ta*tc);
                        
                        

                            if (delta >= 0){
                                 raiz=sqrt(delta);
                                 x1 = (-tb + raiz)/(2*ta);
                                 x2 = (-tb - raiz)/(2*ta);
                                printf("Delta = %.0f\n", delta);
                                printf("Raiz de delta = %.0f\n", raiz);
                                printf("X1 = %.0f\n", x1);
                                printf("X2 = %.0f\n", x2);
                                }

                                if (x1 !=  x2)
                                {  printf("\n");
                                printf("X1 e X2 sao raizes reais e distintas\n");
                                }

                                    if (x1 == x2)
                                    { printf("\n");
                                    printf("X1 e X2 sao raizes reais e iguais\n");
                                    }
                            
                            

                                        else{ printf("\n");
                                        printf("A equacao nao possui raizes reais");
                                        }
                                            printf("\n FIM DA FORMULA \n");
}                       
 }
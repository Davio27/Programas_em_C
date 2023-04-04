 

#include<stdio.h>
int main(){

    int fat, fn, fp, fanp, fatnp, div;
    printf("\n");
    printf("     N !\n");
    printf(" ---------- =\n");
    printf(" ( N - P ) !\n");
      
      printf("\n");
        
        printf("\n Valor fatorial de N: \n"); 
          scanf("%i", &fn);

            printf("\n Valor de P: \n");
              scanf("%i", &fp);
                printf("\n\n");

              fat = fn;
              fatnp = (fn-fp);
              fanp = fatnp;
              

                printf("      %i !", fn);
                printf("\n ------------ = \n");
                printf("  ( %i - %i ) !\n", fn, fp);
                printf("\n\n");

// ----------------------------------------------------------------------------------------------------------------------------

            inicio:
              if (fn>=2){

                printf(" %i! ", fn--);

                  fat=fat*fn;

                    goto inicio;
                    }

// ----------------------------------------------------------------------------------------------------------------------------------

                    printf(" = %i ", fat);
                    
                      printf("\n -------------------------------------------\n");

// -----------------------------------------------------------------------------------------------------------------------------------

                  fim:
                     if (fatnp>=2){  
                      
                      printf(" %i! ", fatnp--);

                          fanp=fanp*fatnp;

                            goto fim;
                            }
                    
                    printf(" = %i ", fanp);
                      
                      printf("\n");

// -------------------------------------------------------------------------------------------------------------------------

    div = fat/fanp;
      
      printf("\n\n");
        
        printf(" %i \n", fat);
          
          printf(" ------------ = %i\n", div);
            
            printf(" %i ", fanp);

              printf("\n\n");

       



            
   return 0;     
}


#include <stdio.h>

int main() {
    int torre, i = 1;
    int bispo, e = 1;
    int rainha;
    int cavalo, a = 1;
    int opcao;

    printf("*** Jogo de XADREZ *** \n");

    printf("Escolha uma opção \n");
    printf("1. TORRE \n");
    printf("2. BISPO \n");
    printf("3. RAINHA \n");
    printf("4. CAVALO \n");
    scanf("%d", &opcao); 

    switch (opcao) {
        case 1:
            printf("TORRE selecionada \nmova-se pra cima cinco casas na vertical.\n");

            // WHILE para movimentar a torre
            while (i <= 5) {
                printf("Movendo-se verticalmente:  %d CASA\n", i);
                i++;
            }
            break;

        case 2:
            printf("BISPO selecionado \nmova-se na diagonal, quatro casas para frente à direita.\n");

            // DO WHILE para movimentar o bispo
            do {
                printf("Movendo-se para frente à direita:  %d CASA\n", e);
                e++;
            } while (e <= 4);
            break;

        case 3:
            printf("RAINHA selecionada \nmova-se oito casas para a esquerda.\n");

            // FOR para movimentar a rainha
            for (rainha = 1; rainha <= 8; rainha++) {
                printf("Movendo-se para a esquerda:  %d CASA\n", rainha);
            }
            break;
        case 4: 
             printf("CAVALO selecionado \nMova-se duas casas para cima e uma para esquerda.\n");
         

         // loop  aninhado movimentar CAVALO

             for (cavalo = 1; cavalo <= 2; cavalo++){
          printf("Movendo-se para cima: %d CASA\n", cavalo);
          }
           for (int cav = 0; cav <= cavalo; cav++){
        
          
           while ( a <= 1) {
           printf("Movendo-se para a esquerda %d CASA \n", a); a++;
          
           }  
           break;
           }
            
            default:
            printf("opçao invalida");
            break;
    }


      







    return 0;
}
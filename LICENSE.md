#include <stdio.h>

int main() {
    int torre, i = 1;
    int bispo, e = 1;
    int rainha;
    int opcao;

    printf("*** Jogo de XADREZ *** \n");

    printf("Escolha uma opção \n");
    printf("1. TORRE \n");
    printf("2. BISPO \n");
    printf("3. RAINHA \n");
    scanf("%d", &opcao); 

    switch (opcao) {
        case 1:
            printf("TORRE : mova-se cinco casas na vertical.\n");

           
            while (i <= 5) {
                printf("Movendo-se verticalmente:  %d\n", i);
                i++;
            }
            break;

        case 2:
            printf("BISPO : mova-se quatro casas para frente à direita na diagonal.\n");

            
            do {
                printf("Movendo-se para frente à direita: %d\n", e);
                e++;
            } while (e <= 4);
            break;

        case 3:
            printf("RAINHA: mova-se oito casas para a esquerda.\n");

            
            for (rainha = 1; rainha <= 8; rainha++) {
                printf("Movendo-se para a esquerda: %d\n", rainha);
            }
            break;

        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}

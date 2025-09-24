#include <stdio.h>

int main() {

   int xadrez;

   do {
        // Menu interativo
        printf("\n\nDigite qual peça ira movimentar elas ja tem suas movimetações Pré-definidos!\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Sair do jogo\n");
        scanf("%d", &xadrez);
   
        switch (xadrez) {
            case 1: {
                // Movimento da Torre: 5 casas para a direita usando For
                int movTorre = 5, torre = 1;

                printf("Movimento da Torre:\n");
                for (torre = 1; torre <= movTorre; torre++) {
                    printf("Direita\n");
                } 
                break;
            }
            case 2:{
                // Movimento do Bispo: 5 casas na diagonal para cima e à direita usando While
                int movBispo = 5, Bispo = 0;

                printf("Movimento do Bispo:\n");
                while (Bispo < movBispo) {
                    printf("Cima, Direita\n");
                    Bispo++;
                }
                break;
            }
            case 3: {
                // Movimento da Rainha: 8 casas para a esquerda usando Do-While
                int movRainha = 8, Rainha = 0;

                printf("Movimento da Rainha:\n");
                do {
                    printf("Esquerda\n");
                    Rainha++;
                } while (Rainha < movRainha);
                break;
            }
            case 4:
                printf("Saindo do Jogo....\n");
                break;
            default:
                printf("Erro de digitação");
                break;
        }
    // Continua ate o usuario decidir sair
    } while (xadrez != 4);
    
    return 0;
}
#include <stdio.h>

// Função recursiva que simula o movimento da Torre e Rainha
void repetirMovimento(char peca[], int mov) {
    if (mov <= 0) return; // condição de parada
    printf("%s\n", peca);
    repetirMovimento(peca, mov - 1); // chamada recursiva
}
// Função recursiva que simula o movimento do Bispo com loops aninhados
void movimentoBispo(int bispo, int movBispo) {
    if (bispo >= movBispo) return;

    // Loop externo: vertical
    for (int vert = 0; vert < 1; vert++) {
        printf("Cima ");
        
        // Loop interno: horizontal
        for (int hor = 0; hor < 1; hor++) {
            printf("Direita\n");
        }
    }

    // Chamada recursiva para o próximo passo
    movimentoBispo(bispo + 1, movBispo);
}

int main() {

int xadrez;

   do {
        // Menu interativo do Jogo de Xadrez
        printf("\n\n\nDigite qual peça ira movimentar elas ja tem suas movimetações Pré-definidas!\n");
        printf("1. Torre movimentos pré-definidos!\n");
        printf("2. Bispo movimentos pré-definidos!\n");
        printf("3. Rainha movimentos pré-definidos!\n");
        printf("4. Cavalo movimentos pré-definidos!\n");
        printf("5. Sair do jogo\n");
        scanf("%d", &xadrez);
   
        switch (xadrez) {
            
            case 1: {
                // Movimento da Torre: 5 casas para a direita usando For
                char peca[] = "Direita"; int mov = 5;

                printf("\nMovimento do Torre:\n");
                repetirMovimento(peca, mov); break;
            }
            case 2: {
                // Movimento do Bispo: 5 casas na diagonal para cima e à direita
                int mov = 5;
                printf("\nMovimento do Bispo:\n");
                movimentoBispo(0, mov); break;
            }
            case 3: {
                // Movimento da Rainha: 8 casas para a esquerda usando Do-While
                char peca[] = "Esquerda"; int mov = 8;

                printf("\nMovimento do Rainha:\n");
                repetirMovimento(peca, mov); break;
            }
            case 4: {
                // Movimentação do cavalo 2 casas para Cima 1 para Direita
                int movVert, movHori;
                printf("\nMovimento do Cavalo:\n");
                for (movVert = 0; movVert < 3; movVert++) {
                    if (movVert < 2) {
                        printf("Cima\n");
                    continue; 
                    }

                for (movHori = 0; movHori < 1; movHori++) {
                    printf("Direita\n");
                }
                }
                break; 
            }
            case 5: printf("Saindo do jogo....\n"); break;
            default: printf("Erro de digitação, digite outro número!"); break;
            
            
        }
    } while (xadrez != 5);

return 0;
}
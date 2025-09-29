#include<stdio.h>
int main(){
int xadrez;

   do {
        // Menu interativo do Jogo de Xadrez
        printf("\n\n\nDigite qual peça ira movimentar elas ja tem suas movimetações Pré-definidas!\n");
        printf("1. Torre movimentos pré-definidos!\n");
        printf("2. Bispo movimentos pré-definidos!\n");
        printf("3. Rainha movimentos pré-definidos!\n");
        printf("4. Cavalo escolha sua movimentação do jogo!\n");
        printf("5. Sair do jogo\n");
        scanf("%d", &xadrez);
   
        switch (xadrez) {
            
            case 1: {
                // Movimento da Torre: 5 casas para a direita usando For
                int movTorre = 5, torre = 1;

                printf("\nMovimento da Torre:\n");
                for (torre = 1; torre <= movTorre; torre++) { printf("Direita\n"); } printf("\nSeguindo o jogo..."); break;;
            }
            case 2:{
                // Movimento do Bispo: 5 casas na diagonal para cima e à direita usando While
                int movBispo = 5, bispo = 0;

                printf("\nMovimento do Bispo:\n");
                while (bispo < movBispo) { printf("Cima, Direita\n"); bispo++; } printf("\nSeguindo o jogo..."); break;
            }
            case 3: {
                // Movimento da Rainha: 8 casas para a esquerda usando Do-While
                int movRainha = 8, rainha = 0;

                printf("\nMovimento da Rainha:\n");
                do { printf("Esquerda\n"); rainha++; } while (rainha < movRainha); printf("\nSeguindo o jogo..."); break;
            }
            case 4: {
                // Movimentação do cavalo com interação do usuario
                int mov1, mov2;
                int movCavalo = 0;

                printf("\nMovimento do Cavalo em 'L'\n");
                printf("Escolha a direção principal (2 casas):\n");
                printf("1. Direita\n2. Esquerda\n3. Cima\n4. Baixo\n");
                scanf("%d", &mov1);

                printf("\nEscolha a direção secundária (1 casa):\n");
                printf("1. Direita\n2. Esquerda\n3. Cima\n4. Baixo\n");
                scanf("%d", &mov2);

                if (mov1 == mov2 || (mov1 == 1 && mov2 == 2) || (mov1 == 2 && mov2 == 1) || (mov1 == 3 && mov2 == 4) || (mov1 == 4 && mov2 == 3))
                {
                    printf("Movimento não permitido!\n");
                    printf("Refaça sua jogada!\n");
                } else {                
                
                // Primeiro movimento do cavalo
                for (movCavalo = 0; movCavalo < 2; movCavalo++) {
                switch (mov1) {
                    case 1: printf("Direita\n"); break;
                    case 2: printf("Esquerda\n"); break;
                    case 3: printf("Cima\n"); break;
                    case 4: printf("Baixo\n"); break;
                    default: printf("Direção principal inválida\n"); return 1;
                }
                }

                // Segundo movimento do cavalo
                int mov2Cavalo = 0;
                while (mov2Cavalo < 1) {
                switch (mov2) {
                    case 1: printf("Direita\n"); break;
                    case 2: printf("Esquerda\n"); break;
                    case 3: printf("Cima\n"); break;
                    case 4: printf("Baixo\n"); break;
                    default: printf("Direção principal inválida\n"); return 1;
                }
                mov2Cavalo++;
                }
            }
                printf("\nSeguindo o jogo...");
            break;
            }
            case 5: printf("Saindo do jogo....\n"); break;
            default: printf("Erro de digitação, digite outro número!"); break;
        }
    } while (xadrez != 5);

return 0;
}
#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Procedimento para a movimentação do bispo
void bispo (int casas){
    if (casas > 0){
        printf("Cima\n");
        printf("Direita\n");
        bispo(casas -1); // Chamando o procedimento do movimento do bispo com -1 para continuar imprimindo movimentos até 0
    }
}

// Procedimento para a movimentação da torre
void torre (int casas){
    if (casas > 0){
        printf("Direita\n");
        torre(casas -1); // Chamando o procedimento do movimento da torre com -1 para continuar imprimindo movimentos até 0
    }
}

// Procedimento para a movimentação da rainha
void rainha (int casas){
    if (casas > 0){
        printf("Esquerda\n");
        rainha(casas -1); // Chamando o procedimento do movimento da rainha com -1 para continuar imprimindo movimentos até 0
    }
}

int main() {
    
    int bispocasas = 5, torrecasas = 5, rainhacasas = 8, cavalo; //Declaração das variáveis utilizada para contagem da movimentação de cada peça

    //Movimentação do Bispo utilizando recursividade
    printf(" <><><> MOVIMENTAÇÃO DO BISPO <><><>\n");
    bispo(bispocasas);

    //Movimentação da Torre utilizando recursividade
    printf("[][][] MOVIMENTAÇÃO DA TORRE [][][]\n");
    torre(torrecasas);

    //Movimentação da Rainha utilizando recursividade
    printf("{}{}{} MOVIMENTAÇÃO DA RAINHA {}{}{}\n");
    rainha(rainhacasas);

    //Movimentação do Cavalo utilizando for e while
    printf(")()()( MOVIMENTAÇÃO DO CAVALO )()()(\n");
    for (cavalo = 0; cavalo < 1; cavalo++){

        int cavalo2 = 0;

        while (cavalo2 < 2){

            printf("Baixo \n");
            cavalo2++;

        }

        printf("Esquerda \n");

    }

    return 0;
}

// Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
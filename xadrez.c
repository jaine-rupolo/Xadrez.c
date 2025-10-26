#include <stdio.h>

// Trabalho de C - Movimento das peças de xadrez
// Feito por Jaine Rupolo
// Objetivo: usar estruturas de repetição (for, while, do-while),
// loops aninhados e recursividade para mover as peças

// ---------------------- NIVEL NOVATO ----------------------

// Torre - usa for
void torre() {
    int i;
    printf("=== Movimento da Torre ===\n");
    for(i = 1; i <= 5; i++) {
        printf("Direita (%d)\n", i);
    }
}

// Bispo - usa while
void bispo() {
    int i = 1;
    printf("\n=== Movimento do Bispo ===\n");
    while(i <= 5) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }
}

// Rainha - usa do-while
void rainha() {
    int i = 1;
    printf("\n=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda (%d)\n", i);
        i++;
    } while(i <= 8);
}

// ---------------------- NIVEL AVENTUREIRO ----------------------

// Cavalo - movimento em L (2 pra baixo e 1 pra esquerda)
// usando for e while
void cavalo() {
    printf("\n=== Movimento do Cavalo ===\n");
    int i, j;

    for(i = 1; i <= 2; i++) { // duas casas pra baixo
        printf("Baixo (%d)\n", i);
    }

    j = 1;
    while(j <= 1) { // uma pra esquerda
        printf("Esquerda (%d)\n", j);
        j++;
    }
}

// ---------------------- NIVEL MESTRE ----------------------

// Torre com recursividade
void torreRec(int n, int limite) {
    if(n > limite) {
        return;
    }
    printf("Direita (%d)\n", n);
    torreRec(n + 1, limite);
}

// Bispo com recursividade + loops aninhados
void bispoRec(int n, int limite) {
    if(n > limite) {
        return;
    }

    int i, j;
    for(i = 0; i < 1; i++) {
        for(j = 0; j < 1; j++) {
            printf("Cima, Direita (%d)\n", n);
        }
    }

    bispoRec(n + 1, limite);
}

// Rainha com recursividade
void rainhaRec(int n, int limite) {
    if(n > limite) {
        return;
    }
    printf("Esquerda (%d)\n", n);
    rainhaRec(n + 1, limite);
}

// Cavalo com loops mais complexos
void cavaloAvancado() {
    printf("\n=== Movimento Avançado do Cavalo ===\n");

    int cima, direita;

    for(cima = 0, direita = 0; cima < 3 && direita < 2; cima++, direita++) {

        if(cima < 2) {
            printf("Cima (%d)\n", cima + 1);
            continue; // vai pra próxima
        }

        if(direita == 1) {
            printf("Direita (%d)\n", direita);
            break; // termina
        }
    }
}

// ---------------------- PROGRAMA PRINCIPAL ----------------------

int main() {

    printf("=====================================\n");
    printf("   Simulacao de Movimentos de Xadrez \n");
    printf("=====================================\n\n");

    // Nivel novato
    torre();
    bispo();
    rainha();

    // Nivel aventureiro
    cavalo();

    printf("\n--- Nivel Mestre ---\n\n");

    printf("Torre Recursiva:\n");
    torreRec(1, 5);

    printf("\nBispo Recursivo:\n");
    bispoRec(1, 5);

    printf("\nRainha Recursiva:\n");
    rainhaRec(1, 8);

    cavaloAvancado();

    printf("\nFim do programa! :)\n");

    return 0;
}

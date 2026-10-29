#include "Fila.h"

void Cria(Fila &F) {
    F.inicio = 0;
    F.fim = -1;
    F.tamanho = 0;
}

bool Vazia(Fila F) {
    return F.tamanho == 0;
}

bool Cheia(Fila F) {
    return F.tamanho == MAX;
}

void Insere(Fila &F, int X, bool &DeuCerto) {
    if (Cheia(F)) {
        DeuCerto = false;
    } else {
        F.fim = (F.fim + 1) % MAX; // Lógica de vetor circular
        F.itens[F.fim] = X;
        F.tamanho++;
        DeuCerto = true;
    }
}

void Retira(Fila &F, int &X, bool &DeuCerto) {
    if (Vazia(F)) {
        DeuCerto = false;
    } else {
        X = F.itens[F.inicio];
        F.inicio = (F.inicio + 1) % MAX;
        F.tamanho--;
        DeuCerto = true;
    }
}
#ifndef FILA_H
#define FILA_H

const int MAX = 100;

struct Fila {
    int itens[MAX];
    int inicio;
    int fim;
    int tamanho;
};

void Cria(Fila &F);
bool Vazia(Fila F);
bool Cheia(Fila F);
void Insere(Fila &F, int X, bool &DeuCerto);
void Retira(Fila &F, int &X, bool &DeuCerto);

#endif
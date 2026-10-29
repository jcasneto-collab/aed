#ifndef a_pilha
#define a_pilha

#include <stdbool.h>
#define Tamanho 10


typedef struct{
    int elementos[Tamanho];
    int topo;
} Pilha;

void Cria(Pilha *p);
bool Cheia(Pilha *p);
bool Vazia(Pilha *p);
void Empilha(Pilha *p, int x, bool *deuCerto);
void Desempilha(Pilha *p, int *x, bool *deuCerto);



#endif
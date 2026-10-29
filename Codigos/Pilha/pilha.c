#include "Pilha.h"
#include <stdio.h>
#include <stdbool.h>

void Cria(Pilha *p)
{
    p->topo = -1;
}

bool Cheia(Pilha *p)
{
    int verify = 0;
    if (p->topo == Tamanho - 1)
    {
        verify = true;
    }
    return verify;
}

bool Vazia(Pilha *p)
{
    int verify = 0;
    if (p->topo == -1)
    {
        verify = true;
    }
    return verify;
}

void Empilha(Pilha *p, int x, bool *deuCerto)
{
    if (Cheia(p) == 1)
    {
        *deuCerto = false;
    }
    else
    {
        p->topo += 1;
        p->elementos[p->topo] = x;
        *deuCerto = true;
    }
}

void Desempilha(Pilha *p, int *x, bool *deuCerto){
    if(Vazia(p) == 1){
        *deuCerto = false;
    }
    else{
        
        *x = p->elementos[p->topo];
        p->topo -= 1;
        *deuCerto = true;
    }

}

bool Insere(NodePtr &node, int x){
    
}
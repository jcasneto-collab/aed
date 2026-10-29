#include "Pilha.h"
#include <stdio.h>
#include <stdbool.h>

int contar_elementos(Pilha *p)
{
    Pilha paux;
    int counte = 0, x;
    bool deuCerto;
    Cria(&paux);
    while (Vazia(p) == false)
    {
        Desempilha(p, &x, &deuCerto);
        Empilha(&paux, x, &deuCerto);
        counte++;
    }

    while (Vazia(&paux) == false)
    {
        Desempilha(&paux, &x, &deuCerto);
        Empilha(p, x, &deuCerto);
    }
    return counte;
}

int valor_topo(Pilha *p)
{

    int x;
    bool deuCerto;

    if (Vazia(p) == true)
    {
        deuCerto = false;
        return -1;
    }
    else
    {
        Desempilha(p, &x, &deuCerto);
        Empilha(p, x, &deuCerto);
        deuCerto = true;
        return x;
    }
}

int main()
{
    Pilha p;
    bool deuCerto;
    int qelements, valorTopo;

    Cria(&p);

    printf("A sequencia da pilha é:\n");

    for (int i = 0; i < 10; i++)
    {
        Empilha(&p, i, &deuCerto);
        printf("%d\n", i);
    }

    qelements = contar_elementos(&p);
    valorTopo = valor_topo(&p);

    printf("A quantidade de elementos da pilha é: %d\n", qelements);
    printf("O valor que está no topo é: %d\n", valorTopo);
}
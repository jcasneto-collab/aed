#include <stdio.h>

typedef struct
{
    int valor;
} Pilha;

void Cria(Pilha *P);
void Empilha(Pilha *P, int X, int *DeuCerto);
void Desempilha(Pilha *P, int *X, int *DeuCerto);
int Vazia(Pilha *P);

Boolean AlgumElementoIgualaX(Pilha *p, int x)
{

    int Y;
    int DeuCerto;
    Boolean verify = 0;
    Pilha peaux;

    Cria(&peaux);

    while (vazia(p) == 0 && verify == 0)
    {
        Desempilha(p, Y, DeuCerto);
        Empilha(paux, Y, DeuCerto);
        if (Y == x)
        {
            verify = 1;
        }
    }

    while (Vazia(&peaux) == 0)
    {
        Desempilha(&peaux, &Y, &DeuCerto);
        Empilha(p, Y, &DeuCerto);
    }

    return verify;
}
/* Verifica se a Pilha P possui algum elemento igual ao valor do parâmetro X */
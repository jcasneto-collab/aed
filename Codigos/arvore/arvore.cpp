#include "arvore.h"
#include <stdio.h>
using namespace std;

void Cria(NodePtr &arvore)
{

    arvore = nullptr;
}

bool Vazia(NodePtr node)
{
    bool verify = false;
    if (node == nullptr)
    {
        verify = true;
    }
    return verify;
}

bool EstaNaArvore(NodePtr node, int x)
{
    bool verify = false;
    if (Vazia(node) == false)
    {
        if (node->Info == x)
        {
            verify = true;
        }
        else if (node->Info > x)
        {
            verify = EstaNaArvore(node->Esq, x);
        }
        else if (node->Info < x)
        {
            verify = EstaNaArvore(node->Dir, x);
        }
    }
    else
    {
        return verify;
    }
    return verify;
}

bool Insere(NodePtr &node, int x)
{
    bool verify = false;
    if (Vazia(node) == true)
    {
        node = new Node;
        node->Info = x;
        node->Dir = nullptr;
        node->Esq = nullptr;
        verify = true;
        
    }
    else if (node->Info == x)
    {
        return verify;
    }
    else
    {
        if (node->Info > x)
        {
            verify = Insere(node->Esq, x);
        }
        else if (node->Info < x)
        {
           verify = Insere(node->Dir, x);
        }
        else
        {
            return verify;
        }
    }
    return verify;
}



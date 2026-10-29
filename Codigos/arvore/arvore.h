#ifndef arvore_abb
#define arvore_abb


struct Node{
    int Info;
    struct Node *Esq;
    struct Node *Dir;
};

typedef struct Node *NodePtr;

void Cria (NodePtr &node);
bool Vazia (NodePtr node);
bool EstaNaArvore(NodePtr node, int x);
bool Insere(NodePtr &node, int x);

#endif
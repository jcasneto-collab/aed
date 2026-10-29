#include <iostream>
#include "Fila.h"

using namespace std;

// Operação não primitiva 1: Trocar elementos (Exercício 3.2)
void TrocaDosElementos(Fila &F1, Fila &F2) {
    Fila F3;
    int X;
    bool status;
    
    Cria(F3);
    
    while (!Vazia(F1)) {
        Retira(F1, X, status);
        Insere(F3, X, status);
    }
    while (!Vazia(F2)) {
        Retira(F2, X, status);
        Insere(F1, X, status);
    }
    while (!Vazia(F3)) {
        Retira(F3, X, status);
        Insere(F2, X, status);
    }
}

// Operação não primitiva 2: Imprimir fila sem destruir os dados originais
void ImprimirFila(Fila &F) {
    Fila Aux;
    int X;
    bool status;
    
    Cria(Aux);
    
    cout << "[ ";
    while (!Vazia(F)) {
        Retira(F, X, status);
        cout << X << " ";
        Insere(Aux, X, status);
    }
    cout << "]" << endl;
    
    // Restaura a fila original
    while (!Vazia(Aux)) {
        Retira(Aux, X, status);
        Insere(F, X, status);
    }
}

int main() {
    Fila F1, F2;
    bool status;
    
    Cria(F1);
    Cria(F2);
    
    // Populando as filas
    Insere(F1, 10, status);
    Insere(F1, 20, status);
    Insere(F1, 30, status);
    
    Insere(F2, 99, status);
    Insere(F2, 88, status);
    
    cout << "Estado Inicial:" << endl;
    cout << "F1: "; ImprimirFila(F1);
    cout << "F2: "; ImprimirFila(F2);
    
    TrocaDosElementos(F1, F2);
    
    cout << "\nApós TrocaDosElementos:" << endl;
    cout << "F1: "; ImprimirFila(F1);
    cout << "F2: "; ImprimirFila(F2);
    
    return 0;
}
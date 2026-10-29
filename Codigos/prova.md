Questão 1 (4 pontos) Considere o Tipo Abstrato de Dado FILA, implementado através de uma lista duplamente encadeada, circular, segundo
os diagramas abaixo. Implemente, da forma mais apropriada para proporcionar portabilidade e reusabilidade, as operações Retira, Vazia e
Destrói:
•
Boolean Vazia(variável por referência F do tipo Fila)
// deve retornar verdadeiro se a fila não tiver nenhum elemento; falso caso contrário.
•
Retira(variável por referência F do tipo Fila, variável por referência X do tipo Elemento, variável por referência Erro tipo boolean)
// retira 1 elemento da fila F. Erro deve retornar verdadeiro se a fila não tiver nenhum elemento para ser retirado; falso caso contrário.
•
Destroi(variável por referência F do tipo Fila)


Boolean Vazia (variavel por referencia F do tipo Fila){
    se (f.primeiro == null) entao
        retorne verdadeiro
    senao 
        retorne falso
}

Retira(variável por referência F do tipo Fila, variável por referência X do tipo Elemento, variável por referência Erro tipo boolean)
    variavel p do tipo nodeptr
    
    se (vazia(F) == verdadeiro) Entao{
        Erro = verdadeiro
    }
    senao {
        Erro = Falso
        p = f.primeiro
        x = p->info 

        se(f.primeiro == f.ultimo){
            f.primeiro = null
            f.ultimo = null
        }
        senao{
            f.primeiro = p->dir
            f.ultimo->dir = f.primeiro
            f.primeiro ->esq = f.ultimo
           
            deleteNode(p)
            p = null
        }

    }
    
    Destroi(variável por referência F do tipo Fila)
        Varial X do tipo int 
        Variavel erro do tipo Boolean
        Enquanto (Vazio(F)==Falso) Repita{
            Retira(F,X,Erro)
        }





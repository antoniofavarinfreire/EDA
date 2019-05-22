
#include "arquivo.h"


int criar (NoABB pp, int k){
    /*rever se realmente e necessario*/
}

int busca (NoABB *r, int k){
    if (r->conteudo == 0 ||  r -> chave == k){
        return r->chave;
    }
    if (r->chave > k)
        return busca(r->esquerda, k);
    else 
        return busca (r->direita, k);
    
}
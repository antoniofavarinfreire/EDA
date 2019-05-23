
#include "arquivo.h"
#include <stdlib.h>
/*https://gist.github.com/marcoscastro/3e4abc13dec4eddb7894*/

int criar (){
  /*uma arvore é representada pelo endereço do nó da raiz
  essa função cria uma arvore com nenhum elemento, ou seja,
  cria uma arvore vazia, por isso retorna NULL.*/
    return NULL;
}

int verifica(NoABB *r){
  /*retorna 1 se a arvore for vcd   aia e 0 caso contrario*/
  return r == NULL;
}

int busca (NoABB *r, int k){
    if (*r) == 0 ||  r -> chave == k){ /*verifico se a raiz ou a chave são vazias*/
        return r->chave; /*retornando a propria chave ou 0*/
    }
    if (r->chave > k)
        return busca(r->esquerda, k);/*buscando nas ramificações a esquerda*/
    else
        return busca (r->direita, k);/*buscando nas ramificações a direita*/

}

void show_arvore(NoABB *r){

  printf("<");
  if (!verifica(r)){ /*se a arvore for diferente de vazia*/
    printf("%d",r->conteudo);/*mostrando o conteudo de cada nó*/
    show_arvore(r->esquerda);/*mostrando as ramificaçõesa esquerda*/
    show_arvore(r->direita);/*mostrando as ramificações a direita*/
  }
  printf(">");
}

void insere (NoABB *r, int k){
  /*inserção de forma recursiva*/
  if(*r == NULL){
    *r = (NoABB*)malloc(sizeof(NoABB));
    /*aderindo as possiveis folhas a nulo*/
    (*r)->direita = NULL;
    (*r)->esquerda = NULL;
    (*r) -> conteudo = k;
  }else if(k < (*r)->conteudo){
    insere(*r->esquerda, k);
  }else if(k> (*r)->conteudo){
    insere(*r->direita,k);
  }
}
#define NULL = 0;
typedef struct noABB{
    int chave;
    int conteudo;
    struct noABB *esquerda;
    struct noABB *direita;
}NoABB;

int cria (NoABB *r);
int busca (NoABB *r, int k);
void show_arvore(NoABB *r);
int cria();
int verifica (NoABB *r);
void insere (NoABB *r, int k);
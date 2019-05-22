#define NULL = 0; 
typedef struct noABB{
    int chave;
    int conteudo;
    struct noABB *esquerda;
    struct noABB *direita;
}NoABB;

int cria (NoABB pp, int k);
int busca (NoABB r, int k)
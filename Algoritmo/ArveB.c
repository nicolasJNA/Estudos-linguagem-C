#include <stdio.h>
#include <stdlib.h>

//estrutura do no
typedef struct NO{
    int chave;
    struct NO *esq;
    struct NO *dir;
}No;

//inicializando a arvore
No* inicializar(){
  return NULL;
}

//criando um novo no
No* criarNovoNo(int ch){
    No* no = (No*)malloc(sizeof(NULL));
    no->chave = ch;
    no->esq = NULL;
    no->dir = NULL;
    return no;
}

//adicionando um nvo no a arvore
No* adiciona(No* raiz, No* no){
    if(raiz == NULL){
        return no;
    }
    if(no->chave < raiz->chave){
        raiz->esq = adiciona(raiz->esq,no);
    }else{
        raiz->dir = adiciona(raiz->dir, no);
    }
    return raiz;
}

//contando a quant de nos
int contagem(No* raiz){
    if(raiz == NULL){
        return 0;
    }
    return (contagem(raiz->esq) + 1 + contagem(raiz->dir));
}

//imprimir a arvore
void imprimir(No* raiz){
    if(raiz != NULL){
        printf("%d",raiz->chave);
        printf(" ");
        imprimir(raiz->esq);
        imprimir(raiz->dir);
    }
       printf("\n");
}

//elemento existe
No* busca(No* raiz, int chave){
    if(raiz == NULL){
        return NULL;
    }
    if(chave == raiz->chave){
        return raiz;
    }
    if(chave < raiz->chave){
        busca(raiz->esq, chave);
    }
    return busca(raiz->dir,chave);
}
int main(){
    No* raiz = inicializar();
    No* novo = criarNovoNo(20);
    No* novo2 = criarNovoNo(10);
    raiz = adiciona(raiz, novo);
    raiz = adiciona(raiz, novo2);

    printf("%d",contagem(raiz));
    imprimir(raiz);
    if(busca(raiz,30) != NULL){
        printf("Elemento foi encontrado");
    }else{
        printf("N foi encontrado");
    }
    return 0;
}
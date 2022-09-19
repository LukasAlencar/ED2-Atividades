#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H

typedef struct NO *ArvBin;

ArvBin *cria_arvBin();

void liberar_arvBin(ArvBin *raiz);

int vazia_arvBin(ArvBin *raiz);

int altura_arvBin(ArvBin *raiz);

int totalNO_arvBin(ArvBin *raiz);

void preOrdem_arvBin(ArvBin *raiz);

void emOrdem_arvBin(ArvBin *raiz);

void posOrdem_arvBin(ArvBin *raiz);

int insere_arvBin(ArvBin *raiz, int valor);

int remove_arvBin(ArvBin *raiz, int valor);

int consulta_arvBin(ArvBin *raiz, int valor);

#endif
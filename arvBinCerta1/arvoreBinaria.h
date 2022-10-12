#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H

typedef struct NO *arvBinaria;

arvBinaria *cria_arvBinaria();

void liberar_arvBinaria(arvBinaria *raiz);

int vazia_arvBinaria(arvBinaria *raiz);

int altura_arvBinaria(arvBinaria *raiz);

int totalNO_arvBinaria(arvBinaria *raiz);

void preOrdem_arvBinaria(arvBinaria *raiz);

void emOrdem_arvBinaria(arvBinaria *raiz);

void posOrdem_arvBinaria(arvBinaria *raiz);

//int insere_arvBinaria(arvBinaria *raiz, int valor);

//int remove_arvBinaria(arvBinaria *raiz, int valor);

int consulta_arvBinaria(arvBinaria *raiz, int valor);

#endif

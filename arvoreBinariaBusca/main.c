#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

int main(){
    int x;
    ArvBin *raiz;

    raiz = cria_arvBin();

    x = insere_arvBin(raiz, 150);
    x = insere_arvBin(raiz, 110);
    x = insere_arvBin(raiz, 100);
    x = insere_arvBin(raiz, 130);
    x = insere_arvBin(raiz, 120);
    x = insere_arvBin(raiz, 140);
    x = insere_arvBin(raiz, 160);


    if(vazia_arvBin(raiz)){
        printf("A arvore esta vazia.");
    }else{
        printf("A arvore possui elementos.");
    }
    printf("\n");
    liberar_arvBin(raiz);

    x = altura_arvBin(raiz);
    printf("A altura da Arvore: %d\n", x);

    x = totalNO_arvBin(raiz);
    printf("Total de nos na arvore: %d\n", x);

    printf("\nVisitando em pre-Ordem:\n");
    preOrdem_arvBin(raiz);

    printf("\nVisitando em-Ordem:\n");
    emOrdem_arvBin(raiz);

    x = remove_arvBin(raiz, 100);
    printf("\nVisitando pos-Ordem depois da remocao:\n");
    posOrdem_arvBin(raiz);






    x = remove_arvBin(raiz, 100);

    printf("\nBusca na Arvore Binaria:\n");
    if(consulta_arvBin(raiz, 140)){
        printf("\nConsulta realizada com sucesso!");
    }else{
        printf("\nElemento não encontrado...");
    }
}

#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

int main(){
    int x;
    arvBinaria *raiz;

    raiz = cria_arvBinaria();

    x = insere_arvBinaria(raiz, 150);
    x = insere_arvBinaria(raiz, 110);
    x = insere_arvBinaria(raiz, 100);
    x = insere_arvBinaria(raiz, 130);
    x = insere_arvBinaria(raiz, 120);
    x = insere_arvBinaria(raiz, 140);
    x = insere_arvBinaria(raiz, 160);




    if(vazia_arvBinaria(raiz)){
        printf("A arvore esta vazia.");
    }else{
        printf("A arvore possui elementos.");
    }
    printf("\n");


    x = altura_arvBinaria(raiz);
    printf("A altura da Arvore: %d\n", x);

    x = totalNO_arvBinaria(raiz);
    printf("Total de nos na arvore: %d\n", x);

    printf("\nVisitando em pre-Ordem:\n");
    preOrdem_arvBinaria(raiz);

    printf("\nVisitando em-Ordem:\n");
    emOrdem_arvBinaria(raiz);


    remove_arvBinaria(raiz, 100);
    x = remove_arvBinaria(raiz, 100);
    printf("\nVisitando pos-Ordem depois da remocao:\n");
    posOrdem_arvBinaria(raiz);






    x = remove_arvBinaria(raiz, 100);

    printf("\nBusca na Arvore Binaria:\n");
    if(consulta_arvBinaria(raiz, 140)){
        printf("\nConsulta realizada com sucesso!\n\n");
    }else{
        printf("\nElemento não encontrado...\n\n");
    }

    liberar_arvBinaria(raiz);
}

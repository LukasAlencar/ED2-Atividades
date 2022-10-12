#include <stdio.h>
#include <stdlib.h>
#include "arvoreAVL.h"

int main(){
    int x;
    arvAVL *raiz;

    raiz = cria_arvAVL();

//    x = insere_arvAVL(raiz, 150);
//    x = insere_arvAVL(raiz, 110);
//    x = insere_arvAVL(raiz, 100);
//    x = insere_arvAVL(raiz, 130);
//    x = insere_arvAVL(raiz, 120);
//    x = insere_arvAVL(raiz, 140);
//    x = insere_arvAVL(raiz, 160);




    if(vazia_arvAVL(raiz)){
        printf("A arvore esta vazia.");
    }else{
        printf("A arvore possui elementos.");
    }
    printf("\n");


    x = altura_arvAVL(raiz);
    printf("A altura da Arvore: %d\n", x);

    x = totalNO_arvAVL(raiz);
    printf("Total de nos na arvore: %d\n", x);

    printf("\nVisitando em pre-Ordem:\n");
    preOrdem_arvAVL(raiz);

    printf("\nVisitando em-Ordem:\n");
    emOrdem_arvAVL(raiz);


//    remove_arvAVL(raiz, 100);
//    x = remove_arvAVL(raiz, 100);
    printf("\nVisitando pos-Ordem depois da remocao:\n");
    posOrdem_arvAVL(raiz);






//    x = remove_arvAVL(raiz, 100);

    printf("\nBusca na Arvore Binaria:\n");
    if(consulta_arvAVL(raiz, 140)){
        printf("\nConsulta realizada com sucesso!\n\n");
    }else{
        printf("\nElemento não encontrado...\n\n");
    }

    liberar_arvAVL(raiz);
}

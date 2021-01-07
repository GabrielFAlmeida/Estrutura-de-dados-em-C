#include "lista.h"
#include <stdio.h>
#include <stdlib.h>


No* cria_lista()
{

    No *inicio = NULL;
    return inicio;

}

No* Inserir(No *inicio, int valor)
{
    No *novo;

    novo = (No*)malloc(sizeof(No));

    novo->info = valor;
    novo->prox = inicio;

    inicio = novo;

    return inicio;
}

No* Remover(No *inicio, int valor)
{
    No* aux2;
    No *aux=inicio;
    if(aux == NULL)
    {
        printf("Pilha vazia.\n");
    }
    else
    {
        while(aux != NULL && aux->info!=valor)
        {
            aux2 = aux;
            aux = aux->prox;

        }
        if (aux != NULL)
        {
            if(aux==inicio)
            {
                inicio = aux->prox;
                free(aux);
            }
            aux2->prox = aux->prox;
            free(aux);
        }
    }
    return inicio;
}

void Mostrar(No *inicio)
{
    No *aux=inicio;
    while (aux != NULL)
    {
        printf("%d ",aux->info);
        aux = aux->prox;
    }

}



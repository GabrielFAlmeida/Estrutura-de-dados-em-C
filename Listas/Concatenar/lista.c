#include "lista.h"

No* Cria_Lista()
{
    No* inicio = NULL;
    return inicio;
}

No* Inserir_Comeco(No* inicio, char valor[MAX])
{
    No* novo;
    novo = (No*)malloc(sizeof(No));
    novo->ante = NULL;
    novo->prox = inicio;
    strcpy(novo->valor,valor);
    if(inicio != NULL)
    {
        inicio->ante = novo;
    }
    inicio = novo;
    return inicio;
}

No* Inserir_Fim(No* inicio, char valor[MAX])
{
    No *novo;
    No *aux = inicio;
    if(inicio == NULL)
    {
        novo = (No*)malloc(sizeof(No));
        strcpy(novo->valor,valor);
        novo->prox = NULL;
        inicio = novo;

    }
    else
    {
        novo = (No*)malloc(sizeof(No));
        strcpy(novo->valor,valor);
        novo->prox = NULL;
        while(aux->prox!=NULL)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
    return inicio;
}

No* Concatenar(No* lista1, No* lista2)
{
    No* aux1;
    No* aux2;
    No* concatenado = Cria_Lista();
    aux1 = lista1;
    aux2 = lista2;
    while(aux1!=NULL)
    {
        concatenado = Inserir_Fim(concatenado, aux1->valor);
        aux1 = aux1->prox;
    }
    while(aux2!=NULL)
    {
        concatenado = Inserir_Fim(concatenado, aux2->valor);
        aux2 = aux2->prox;
    }
    return concatenado;
}

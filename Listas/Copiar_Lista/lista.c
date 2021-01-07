#include "lista.h"

No* Cria_Lista()
{
    No* inicio = NULL;
    return inicio;
}

No* Inserir_Fim(No* inicio, int valor)
{
    No* novo;
    No* aux = inicio;
    novo = (No*)malloc(sizeof(No));
    if(inicio == NULL)
    {
        novo->numero = valor;
        novo->prox = novo->ante = NULL;
        inicio = novo;
    }
    else
    {
        while(aux->prox!=NULL)
        {
            aux = aux->prox;
        }
        novo->numero = valor;
        novo->ante = aux;
        aux->prox = novo;
        novo->prox = NULL;
    }
    return inicio;
}

No* Copia_Lista(No* inicio, int valor)
{
    No* aux = inicio;
    No* copia = Cria_Lista();
    int cont;
    cont = 1;
    while(aux!=NULL && cont<=valor)
    {
        copia = Inserir_Fim(copia, aux->numero);
        aux = aux->prox;
        cont++;
    }
    return copia;
}

#include "lista.h"

No* Cria_Lista()
{
    No* inicio = NULL;
    return inicio;
}

No* Inserir_Comeco(No* inicio, int valor)
{
    No* novo;
    novo = (No*)malloc(sizeof(No));
    novo->numero = valor;
    novo->ante = NULL;
    novo->prox = inicio;
    if(inicio!=NULL)
    {
        inicio->ante = novo;
    }
    inicio = novo;
    return inicio;
}

void Consultar_Lista(No* inicio)
{
    No* aux = inicio;
    while(aux!=NULL)
    {
        printf("%d\t",aux->numero);
        aux=aux->prox;
    }
    printf("\n");
}

No* Filtro(No* inicio, int valor)
{
    No* aux = inicio;
    No* filtrado = Cria_Lista();
    while(aux!=NULL)
    {
        if((aux->numero)>=valor)
        {
            filtrado = Inserir_Comeco(filtrado,aux->numero);
        }
        aux = aux->prox;
    }
    return filtrado;
}

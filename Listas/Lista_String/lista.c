#include "lista.h"



No* cria_lista()
{

    No *inicio = NULL;
    return inicio;

}

No* Inserir(No *inicio, char nome[MAX])
{
    int i;

    No *novo;

    novo = (No*)malloc(sizeof(No));

    novo->ante = NULL;

    for(i=0; i<MAX; i++)
    {
        novo->nome[i] = nome[i];
    }

    novo->prox = inicio;

    if(inicio != NULL)
    {
        inicio->ante = novo;
    }

    inicio = novo;

    return inicio;
}

No* Remover(No *inicio, char nome[MAX])
{
    No *aux=inicio;
    if(aux == NULL)
    {
        printf("Lista vazia.\n");
    }
    else
    {
        while(aux != NULL && (strcmp(aux->nome,nome) != 0))
        {
            aux = aux->prox;

        }
        if (aux != NULL)
        {
            if(aux==inicio)
            {
                if(aux->prox!=NULL)
                {
                    inicio = aux->prox;
                    aux->prox->ante = NULL;
                    free(aux);
                }
                else
                {
                    inicio = NULL;
                    free(aux);
                }

            }
            else
            {
                if(aux->prox !=NULL)
                {
                    aux->prox->ante = aux->prox;
                    aux->ante->prox = aux->prox;
                    free(aux);
                }
                else
                {
                    aux->ante->prox = NULL;
                    free(aux);
                }
            }
        }
    }
    return inicio;
}

void Mostrar(No *inicio)
{
    No *aux = inicio;
    while (aux != NULL)
    {
        printf("%s \n",aux->nome);
        aux = aux->prox;
    }
    system("pause");

}


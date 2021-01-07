#include "lista.h"

No* Cria_Lista()
{
    No *inicio;
    inicio = NULL;
    return inicio;
}

No* Inserir_Comeco(No *inicio, int valor)
{
    No *novo;
    novo = (No*)malloc(sizeof(No));
    novo->num = valor;
    novo->prox = inicio;
    inicio = novo;
    return inicio;
}

No* Inserir_Final(No *inicio, int valor)
{
    No *novo;
    No *aux = inicio;
    if(inicio == NULL)
    {
        novo = (No*)malloc(sizeof(No));
        novo->num = valor;
        novo->prox = NULL;
        inicio = novo;
        aux = novo;
    }
    else
    {
        novo = (No*)malloc(sizeof(No));
        novo->num = valor;
        novo->prox = NULL;
        aux->prox = novo;
        aux = novo;
    }
    return inicio;
}

No* Remover_Comeco(No *inicio)
{
    No *aux = inicio;
    if(aux == NULL)
    {
        printf("Estrutura vazia.\n");
        system("pause");
    }
    else
    {
        if(aux != NULL)
        {
            inicio = aux->prox;
            printf("%d\n",aux->num);
            free(aux);
            aux = NULL;
            aux = inicio;
        }
    }
    return inicio;
}

void Mostrar(No *inicio)
{
    No *aux = inicio;
    if(aux==NULL)
    {
        printf("Não há elementos na estruruta.");
    }
    while (aux != NULL)
    {
        printf("%d \t",aux->num);
        aux = aux->prox;
    }
    printf("\n");
}

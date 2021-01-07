#include "lista.h"

No* Cria_lista()
{
    No *inicio = NULL;
    return inicio;
}
//=====================================================================================================================
No* Inserir(No *inicio, int mat, float sal, char n[])
{
    int i;
    No *novo;
    novo = (No*)malloc(sizeof(No));
    novo -> matricula = mat;
    novo -> salario = sal;
    for(i=0; i<MAX; i++)
    {
        novo -> nome[i] = n[i];
    }
    novo -> proximo = inicio;
    inicio = novo;
    return inicio;
}
//=====================================================================================================================
void Mostrar(No *inicio)
{
    int i;
    i = 1;
    No *aux = inicio;
    while (aux != NULL)
    {
        printf("====================== FUNCIONÁRIO %d ==========================\n",i);
        printf("Nome do %d°: %s",i, aux->nome);
        printf("\n");
        printf("Matrícula do %d°: %d",i,aux->matricula);
        printf("\n");
        printf("Sálario do %d°: R$%.2f",i,aux->salario);
        printf("\n");
        aux = aux->proximo;
        i++;
        printf("\n");
    }
    printf("===============================================================\n");
}
//=====================================================================================================================
int Verificar_matricula(No *inicio, int *matricula)
{
    No *aux = inicio;
    while (aux != NULL)
    {
        if(aux->matricula == *matricula)
        {
            return 1;
        }
        aux = aux->proximo;
    }
}
//=====================================================================================================================

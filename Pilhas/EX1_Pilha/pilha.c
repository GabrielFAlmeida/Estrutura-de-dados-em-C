#include "pilha.h"

//Cria a pilha==================================================================================
Pilha Criar_Pilha()
{
    Pilha Ptp;
    Ptp = (Pilha)malloc(sizeof(struct P));
    if(Ptp != NULL)
    {
        Ptp->topo = -1;
    }
    return Ptp;
}
//Inseri elementos na pilha======================================================================
int Inserir(Pilha *Ptp)
{
    int n;
    if ((*Ptp)->topo == MAX-1)
    {
        printf("Pilha cheia, impossível inserir elementos.\n");
        system("pause");
        return 0;
    }
    else
    {
        printf("Digite o número desejado..: \n");
        scanf("%i",&n);
        (*Ptp)->topo++;
        int m = (*Ptp)->topo;
        (*Ptp)->pilha[(*Ptp)->topo] = n;
        printf("%i\n",m);
        printf("Elemento adicionado com sucesso.\n");
        system("pause");
        return 1;
    }
}
//Retira elementos da pilha=================================================================
int* Remover(Pilha *Ptp)
{
    int* elemento;
    if ((*Ptp)->topo == -1)
    {
        printf("Impossível retirar, a pilha está vazia.\n");
        system("pause");
        return NULL;
    }
    else
    {
        elemento = (int*)malloc(sizeof(int));
        *elemento = (*Ptp)->pilha[(*Ptp)->topo];
        (*Ptp)->topo--;
        printf("O elemento do topo foi retirado.\n");
        system("pause");
        return elemento;
    }
}

//Destroi a pilha================================================================================
void Destroi_pilha(Pilha* Ptp)
{
    free(*Ptp);
    (*Ptp) = NULL;
    printf("Pilha destruída com sucesso.\n");
    system("pause");
}
//Consulta a pilha===============================================================================
void Consulta_pilha(Pilha Ptp)
{
    int* elem;
    if (Ptp->topo == -1)
    {
        printf("Pilha vazia.\n");
        system("pause");
    }
    else
    {
        elem = (int*)malloc(sizeof(int));
        *elem = Ptp->pilha[Ptp->topo];
        printf("O elemento no topo da pilha é..: %i\n",*elem);
        system("pause");
    }
}

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
        (*Ptp)->pilha[(*Ptp)->topo] = n;
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
//Inverte a pilha================================================================================
void Inverter_pontas(Pilha *Ptp)
{
    Pilha Aux = Criar_Pilha();
    int aux;
    (Aux)->topo = -1;
    aux = (Aux)->topo;
    if((*Ptp)->topo == -1)
    {
        printf("Impossível inverter base e topo, pilha vazia.\n");
        system("pause");
    }
    else
    {
        if((*Ptp)->topo == 0)
        {
            printf("Impossível inverter base e topo, a pilha tem apenas um elemento.\n");
            system("pause");
        }
        else
        {
            while((Aux)->topo != (*Ptp)->topo)
            {
                (Aux)->topo++;
                (Aux)->pilha[(Aux)->topo] = (*Ptp)->pilha[(Aux)->topo];
            }
            (*Ptp)->pilha[(*Ptp)->topo] = (Aux)->pilha[0];
            (*Ptp)->pilha[0] = (Aux)->pilha[(Aux)->topo];
        }
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
    int elem, aux;
    if (Ptp->topo == -1)
    {
        printf("Pilha vazia.\n");
        system("pause");
    }
    else
    {
        aux = Ptp->topo;
        while(aux>-1)
        {
            elem = Ptp->pilha[aux];
            printf("O %d° elemento da pilha é..: %i\n",aux, elem);
            aux--;
        }
        system("pause");
    }
}

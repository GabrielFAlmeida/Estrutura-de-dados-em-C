
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
int Inserir(Pilha *Ptp, char l)
{
    if ((*Ptp)->topo == MAX-1)
    {
        return 0;
    }
    else
    {
        (*Ptp)->topo++;
        (*Ptp)->letra[(*Ptp)->topo] = l;
        return 1;
    }
}
//Retira elementos da pilha=================================================================
char* Remover(Pilha *Ptp)
{
    char* letra;
    if ((*Ptp)->topo == -1)
    {
        return NULL;
    }
    else
    {
        letra = (char*)malloc(sizeof(char));
        *letra = (*Ptp)->letra[(*Ptp)->topo];
        (*Ptp)->topo--;
        return *letra;
    }
}

#include "pilha.h"

Pilha Cria_Pilha()
{
    Pilha Ptp;
    Ptp = (Pilha)malloc(sizeof(struct P));
    if(Ptp != NULL)
    {
        Ptp->topo = -1;
    }
    return Ptp;
}

int E_cheia(Pilha P)
{
    if(P->topo == MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int E_vazia(Pilha P)
{
    if(P->topo == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Inserir(Pilha *P, char x)
{
    int cont;
    if(E_cheia((*P))== 1)
    {
        return 0;
    }
    else
    {
        (*P)->topo++;
        (*P)->palavra[(*P)->topo] = x;
        return 1;
    }
}

int Remover(Pilha *P)
{
    if(E_vazia((*P))==1)
    {
        return 0;
    }
    else
    {
        if((*P)->topo == 0)
        {
            return 0;
        }
        else
        {
            if(((*P)->palavra[(*P)->topo]) != ((*P)->palavra[(*P)->topo-1]))
            {
                (*P)->palavra[(*P)->topo] = NULL;
                (*P)->palavra[(*P)->topo-1] = NULL;
                (*P)->topo = (*P)->topo-2;
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}

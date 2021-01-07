#include "pilha.h"

Pilha Cria_Pilha()
{
    Pilha P;
    P = (Pilha)malloc(sizeof(struct stack));
    if(P != NULL)
    {
        P->topo = -1;
    }
    return P;
}
int Inserir_Pilha(Pilha *P, char c)
{
    if((*P)->topo == MAX-1)
    {
        return 0;
    }
    else
    {
        (*P)->topo++;
        (*P)->info[(*P)->topo] = c;
        return 1;
    }
}



int Remover_Pilha(Pilha *P, int *cont)
{
    if((*P)->topo == -1)
    {
        return 0;
    }
    else
    {
        if(((*P)->topo) > 0)
        {
            if((*P)->info[(*P)->topo] != (*P)->info[(*P)->topo-1])
            {
                (*P)->info[(*P)->topo] = NULL;
                (*P)->info[(*P)->topo-1] = NULL;
                (*P)->topo = (*P)->topo-2;
                *cont = *cont+1;
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}

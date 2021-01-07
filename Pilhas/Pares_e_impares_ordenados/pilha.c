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
int Inserir(Pilha *Ptp, int n)
{
    if ((*Ptp)->topo == MAX-1)
    {
        return 0;
    }
    else
    {

        (*Ptp)->topo++;
        (*Ptp)->pilha[(*Ptp)->topo] = n;
        return 1;
    }
}
//Retira elementos da pilha=================================================================
int Remover(Pilha *Ptp)
{
    int elemento;
    if ((*Ptp)->topo == -1)
    {
        return NULL;
    }
    else
    {
        elemento = (*Ptp)->pilha[(*Ptp)->topo];
        (*Ptp)->topo--;
        return elemento;
    }
}

//Ordena a pilha com pares na base e impares no topo=============================================
void Ordenar_pilha(Pilha* Ptp)
{
    Pilha Aux_par, Aux_impar;
    Aux_impar = Criar_Pilha();
    Aux_par = Criar_Pilha();
    int aux = -1;
    int n, aux2;
    aux2 = (*Ptp)->topo;
    if((*Ptp)->topo == -1)
    {
        printf("Impossível ordenar, pilha vazia.\n");
    }
    else
    {
        if((*Ptp)->topo == 0)
        {
            printf("Impossível ordenar, a pilha tem apenas um elemento.\n");
        }
        else
        {
            while(aux != aux2)
            {
                aux++;
                n = Remover(&*Ptp);
                //n = Remover(&Aux);
                if((n%2)== 0)
                {
                    Inserir(&Aux_par, n);
                }
                else
                {
                    if((n%2)!= 0)
                    {
                        Inserir(&Aux_impar, n);
                    }
                }
            }
            while((Aux_par)->topo > -1)
            {
                n = Remover(&Aux_par);
                Inserir(&*Ptp, n);
            }
            while((Aux_impar)->topo > -1)
            {
                n = Remover(&Aux_impar);
                Inserir(&*Ptp, n);
            }
            free(Aux_impar);
            free(Aux_par);
        }
    }
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


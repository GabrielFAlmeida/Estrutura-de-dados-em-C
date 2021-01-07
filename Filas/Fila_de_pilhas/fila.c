#include "fila.h"

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
int Inserir_Pilha(Fila f, int aux)
{
    int n;
    system("cls");
    if(f->Num_elementos<aux || aux<1 || f->Inicio>aux || f->Fim<aux)
    {
        printf("Impossível inserir elementos na pilha, pois a fila não foi inicializada nessa posição.\n");
        system("pause");
        return 0;
    }
    if ((f->P[aux]->topo) == MAX_PILHA-1)
    {
        printf("Pilha cheia, impossível inserir elementos.\n");
        system("pause");
        return 0;
    }
    else
    {
        printf("Digite o número desejado..: \n");
        scanf("%i",&n);
        printf("%d\n",f->P[aux]->topo);
        f->P[aux]->topo++;
        printf("%d\n",f->P[aux]->topo);
        f->P[aux]->numeros[f->P[aux]->topo] = n;
        printf("%d\n",f->P[aux]->numeros[f->P[aux]->topo]);
        printf("Elemento adicionado com sucesso.\n");
        system("pause");
        return 1;
    }
}
//Retira elementos da pilha=================================================================
int Remover_Pilha(Fila f, int aux)
{
    if(f->Num_elementos< aux || aux<1 || f->Inicio>aux || f->Fim<aux)
    {
        printf("Impossível retirar elementos na pilha, pois a fila não foi inicializada nessa posição.\n");
        system("pause");
        return 0;
    }
    if ((f->P[aux]->topo) == -1)
    {
        printf("Pilha vazia, impossível retirar elementos.\n");
        system("pause");
        return 0;
    }
    else
    {
        f->P[aux]->numeros[f->P[aux]->topo] = (int)NULL;
        printf("%d\n",f->P[aux]->topo);
        f->P[aux]->topo--;
        printf("%d\n",f->P[aux]->topo);
        printf("Elemento retirado com sucesso.\n");
        system("pause");
        return 1;
    }
}
//Consulta a pilha===============================================================================
/*void Consulta_Pilha(Fila f)
{
    int aux1, aux2, j;
    printf("Digite a posição da pilha a ser consultada..: \n");
    scanf("%d",&aux2);
    if(f->Num_elementos == 0 || aux2<(f->Inicio) || aux2>=(f->Fim))
    {
        printf("Impossível consultar elementos na pilha, pois a fila não foi inicializada nessa posição.\n");
        system("pause");
    }
    else
    {
        if((f->P[aux2]->topo)!= -1)
        {
            aux1 = f->P[aux2]->topo;
            printf("PILHA %d :\n",aux2);
            for(j=aux1; j>=0; j--)
            {
                printf("%d° elemento: %d\n",j+1,f->P[aux2]->numeros[j]);
            }
            system("pause");
        }
        else
        {
            printf("Pilha vazia.\n");
            system("pause");
        }
    }
}
*/
//=====================================================================================================================

Fila Criar_Fila()
{
    Fila f;
    f = (Fila)malloc(sizeof(struct fila));
    if (f != NULL) //se o malloc conseguiu alocar memoria
    {
        f->Fim = f->Inicio = f->Num_elementos = 0;
    }
    return f;
}
//Verificar se fila está cheia
int Fila_Cheia(Fila f) //retorna 1 se estiver e 0 se não estiver
{
    if (f->Num_elementos == MAX_FILA)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//Verificar se fila está vazia
int Fila_Vazia(Fila f) //retorna 1 se estiver vazia e 0 se não estiver
{
    if (f->Num_elementos == 0)
        return 1;
    else
        return 0;
}
// Inserir um nodo no final da fila
int Inserir_Fila(Fila f) //retorna 1 se inseriu e 0 se não inseriu
{
    Pilha stack;
    if (Fila_Cheia(f) == 1)
    {
        printf("Não foi possível inserir a pilha, a fila está cheia.\n");
        system("pause");
        return 0;
    }
    else
    {
        (f->Num_elementos)++;
        stack = Criar_Pilha();
        f->P[f->Fim] = stack;
        (f->Fim)++;
        if (f->Fim == MAX_FILA-1)
        {
            // esse if equivale a f->FF = (f->FF+1)%MAX_FILA;
            f->Fim = 0;
        }
        else
        {
            printf("%d\n",f->Fim);
            printf("%d\n",f->Inicio);
            printf("%d\n",f->Num_elementos);
            printf("Pilha inserida com sucesso.\n");
            system("pause");
        }
        return 1;
    }
}
//Excluir o nodo do início da fila
int Remover_Fila(Fila f)
{
    if(Fila_Vazia(f) == 1)
    {
        printf("Não foi possível retirar a pilha, a fila está vazia.\n");
        system("pause");
        return 0;
    }
    else
    {

        (f->Inicio)++;
        printf("%d\n",f->Inicio);
        (f->Num_elementos)--;
        if(f->Inicio == MAX_FILA-1)
        {
            f->Inicio = 0;
        }
        else
        {
            printf("%d\n",f->Fim);
            printf("%d\n",f->Num_elementos);
            if(f->Num_elementos == 0)
            {
                f->Fim = 0;
                f->Inicio = 0;
            }
            printf("Pilha removida com sucesso.\n");
            system("pause");
        }
        return 1;
    }
}

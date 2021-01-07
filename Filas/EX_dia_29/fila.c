#include "fila.h"

//=====================================================================================================================

Fila Cria_fila()
{
    Fila f;
    f = (Fila)malloc(sizeof(struct fila));
    if (f != NULL) //se o malloc conseguiu alocar memoria
    {
        f->Fim = f->Inicio = f->Num_elementos = 0;
    }
    return f;
}

//=====================================================================================================================

int E_cheia(Fila f) //retorna 1 se estiver e 0 se não estiver
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

//=====================================================================================================================

int E_vazia(Fila f) //retorna 1 se estiver vazia e 0 se não estiver
{
    if (f->Num_elementos == 0)
        return 1;
    else
        return 0;
}

//=====================================================================================================================

int Inserir(Fila f, char n[100]) //retorna 1 se inseriu e 0 se não inseriu
{
    int i;
    if (E_cheia(f) == 1)
    {
        return 0;
    }
    else
    {
        for(i=0; i<100; i++)
        {
            f->fila[f->Fim][i] = NULL;
        }
        for(i=0; i<100; i++)
        {
            f->fila[f->Fim][i] = n[i];
        }
        if (f->Fim == MAX_FILA-1)
        {
            f->Fim = 0;
        }
        else
        {
            (f->Fim)++;
            (f->Num_elementos)++;
            return 1;
        }
    }
}

//=======================================================================================================

int Remover(Fila f, char a[])
{
    char c[100];
    int i;
    if(E_vazia(f) == 1)
    {
        return 0;
    }
    else
    {

        for(i=0; i<100; i++)
        {
            c[i] = f->fila[f->Inicio][i];
            f->fila[f->Inicio][i] = NULL;
        }
        if(f->Inicio == MAX_FILA-1)
        {
            f->Inicio = 0;
        }
        else
        {
            (f->Inicio)++;
            (f->Num_elementos)--;
            strcpy(a,c);
        }
        return 1;
    }
}

//=======================================================================================================

void Consultar(Fila f, int cx)
{
    int i, j;
    j = f->Num_elementos;
    if(E_vazia(f) == 1)
    {
        printf("Não há histórico de atendimento.\n");
    }
    else
    {
        for(i=0; i<j; i++)
        {
            printf("O %d° cliente atendido pelo caixa %d foi..: %s.\n",i+1,cx, f->fila[i]);
        }
    }
}

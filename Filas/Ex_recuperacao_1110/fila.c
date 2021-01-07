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
    if (f->Num_elementos == MAX)
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
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//=====================================================================================================================

int Inserir(Fila f, int n) //retorna 1 se inseriu e 0 se não inseriu
{
    if (E_cheia(f) == 1)
    {
        return 0;
    }
    else
    {
        f->fila[f->Fim] = NULL;
        f->fila[f->Fim] = n;
        if (f->Fim == MAX-1)
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

int Remover(Fila f)
{
    int n;
    if(E_vazia(f) == 1)
    {
        return 0;
    }
    else
    {
        n = f->fila[f->Inicio];
        f->fila[f->Inicio] = NULL;
        if(f->Inicio == MAX-1)
        {
            f->Inicio = 0;
        }
        else
        {
            (f->Inicio)++;
            (f->Num_elementos)--;
        }
        return n;
    }
}

//=======================================================================================================

void Libera_fila(Fila f)
{
    free(f);
}

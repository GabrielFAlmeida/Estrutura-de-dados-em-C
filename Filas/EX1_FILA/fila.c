#include "fila.h"

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
//Verificar se fila está cheia
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
//Verificar se fila está vazia
int E_vazia(Fila f) //retorna 1 se estiver vazia e 0 se não estiver
{
    if (f->Num_elementos == 0)
        return 1;
    else
        return 0;
}


// Inserir um nodo no final da fila
int Inserir(Fila f, int elem) //retorna 1 se inseriu e 0 se não inseriu
{
    if (E_cheia(f) == 1)
    {
        return 0;
    }
    else
    {
        f->fila[f->Fim] = elem;
        printf("Inserido : %d\n",f->fila[f->Fim]);
        if (f->Fim == MAX_FILA-1)
        {
            // esse if equivale a f->FF = (f->FF+1)%MAX_FILA;
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
//Excluir o nodo do início da fila
int Remover(Fila f)
{
    int elem;
    if(E_vazia(f) == 1)
    {
        return 0;
    }
    else
    {
        elem = f->fila[f->Inicio];
        f->fila[f->Inicio] = NULL;
        if(f->Inicio == MAX_FILA-1)
        {
            f->Inicio = 0;
        }
        else
        {
            (f->Inicio)++;
            (f->Num_elementos)--;
            return elem;
        }
    }
}
/* Consultar  nodo no inicio da fila
int Consultar(Fila f)
{

}
*/
//Liberar área alocada para a fila
void Libera_fila(Fila f)
{

    f->Fim = f->Inicio = f->Num_elementos = 0;
    free(f);

}



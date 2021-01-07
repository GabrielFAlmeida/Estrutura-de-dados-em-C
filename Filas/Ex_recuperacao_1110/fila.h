#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#define MAX 50
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct fila
{
    char fila[MAX];
    int Inicio;
    int Fim;
    int Num_elementos; //numro de elementos na fila
};

typedef struct fila* Fila;

Fila Cria_fila();

//=====================================================================================================================

int Inserir(Fila f, int n); //retorna 1 se inseriu e 0 se não inseriu

//=====================================================================================================================

int Remover(Fila f);

//=====================================================================================================================

int E_cheia(Fila f); //retorna 1 se estiver e 0 se não estiver

//=====================================================================================================================

int E_vazia(Fila f); //retorna 1 se estiver vazia e 0 se não estiver

//=====================================================================================================================

void Libera_fila(Fila f);
#endif // PILHA_H_INCLUDED


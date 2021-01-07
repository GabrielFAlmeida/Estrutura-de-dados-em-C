#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#define MAX_FILA 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct fila
{
    char fila[MAX_FILA][100];
    int Inicio;
    int Fim;
    int Num_elementos; //numro de elementos na fila
};

typedef struct fila* Fila;

struct caixa
{
    int nro;
    Fila historico;
};

typedef struct caixa* Caixa;
//=====================================================================================================================

Fila Cria_fila();

//=====================================================================================================================

int Inserir(Fila, char n[100]); //retorna 1 se inseriu e 0 se não inseriu

//=====================================================================================================================

int Remover(Fila f, char a[]);

//=====================================================================================================================

int E_cheia(Fila f); //retorna 1 se estiver e 0 se não estiver

//=====================================================================================================================

int E_vazia(Fila f); //retorna 1 se estiver vazia e 0 se não estiver

//=====================================================================================================================

void Consultar(Fila f, int cx);

//=====================================================================================================================
#endif // FILA_H_INCLUDED

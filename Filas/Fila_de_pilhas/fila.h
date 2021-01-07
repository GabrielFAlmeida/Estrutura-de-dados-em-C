#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#define MAX_FILA 10
#define MAX_PILHA 10
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct P
{
    int numeros[MAX_PILHA];
    int topo;
};

typedef struct P* Pilha;

struct fila
{
    Pilha P[MAX_FILA];
    int Inicio;
    int Fim;
    int Num_elementos; //numro de elementos na fila
};

typedef struct fila* Fila;

Pilha Criar_Pilha();

int Inserir_Pilha(Fila f, int aux);

int Remover_Pilha(Fila f, int aux);

void Destroi_Pilha(Pilha *Ptp);

void Consulta_Pilha(Fila f);

Fila Criar_Fila();

int Inserir_Fila(Fila f);

int Remover_Fila(Fila f);

int Fila_Cheia(Fila f);

int Fila_Vazia(Fila f);

#endif

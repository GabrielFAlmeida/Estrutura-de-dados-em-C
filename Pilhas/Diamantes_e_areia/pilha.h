#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#define MAX 1000
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct stack
{
    char info[MAX];
    int topo;
};

typedef struct stack* Pilha;

Pilha Cria_Pilha(void);

int Inserir_Pilha(Pilha *P, char c);

int Remover_Pilha(Pilha *P, int *cont);

#endif // PILHA_H_INCLUDED

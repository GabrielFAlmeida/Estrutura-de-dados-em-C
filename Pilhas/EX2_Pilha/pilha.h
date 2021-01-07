#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#define MAX 100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct P
{
    char letra[MAX];
    int topo;
};

typedef struct P* Pilha;

Pilha Criar_Pilha();

int Inserir(Pilha *Ptp, char l);

char* Remover(Pilha *Ptp);
#endif


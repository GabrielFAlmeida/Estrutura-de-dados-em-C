#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#define MAX 20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct P
{
    char palavra[MAX];
    int topo;
};

typedef struct P* Pilha;

Pilha Cria_Pilha(void);

int E_cheia(Pilha P);

int E_vazia(Pilha P);

int Inserir(Pilha *P, char x);

int Remover(Pilha *P);

#endif // PILHA_H_INCLUDED

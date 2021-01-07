#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#define MAX 5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Cria a pilha==================================================================================
struct P
{
    int pilha[MAX];
    int topo;
};

typedef struct P* Pilha;

Pilha Criar_Pilha();

int Inserir(Pilha *Ptp);

int* Remover(Pilha *Ptp);

void Destroi_pilha(Pilha* Ptp);

void Consulta_pilha(Pilha Ptp);

#endif

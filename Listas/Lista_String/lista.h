#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#define MAX 30
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct no
{
    char nome[MAX];
    struct no *prox;
    struct no *ante;
};

typedef struct no No;


No* cria_lista();//retorna um ponteiro para no, ou seja, o inicio da lista

No* Inserir(No *inicio, char nome[MAX]);

No* Remover(No *inicio, char nome[MAX]);

void Mostrar(No *inicio);

#endif // LISTA_H_INCLUDED


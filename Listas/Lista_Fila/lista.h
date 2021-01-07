#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct no
{
    int num;
    struct no *prox;
};

typedef struct no No;

No* Cria_Lista();

No* Inserir_Comeco(No *inicio, int valor);

No* Inserir_Final(No *inicio , int valor);

No* Remover_Comeco(No *inicio);

void Mostrar(No *inicio);

#endif // LISTA_H_INCLUDED



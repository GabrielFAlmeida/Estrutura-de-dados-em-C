#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

struct no
{
    int numero;
    struct no* prox;
    struct no* ante;
};

typedef struct no No;

No* Cria_Lista(void);

No* Inserir_Comeco(No* inicio, int valor);

void Consultar_Lista(No* inicio);

No* Filtro(No* inicio, int valor);

#endif

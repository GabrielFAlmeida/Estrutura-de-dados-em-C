#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct no
{
    int numero;
    struct no* prox;
    struct no* ante;
};

typedef struct no No;

No* Cria_Lista(void);

No* Inserir_Fim(No* inicio, int valor);

No* Copia_Lista(No* inicio, int valor);

#endif // LISTA_H_INCLUDED

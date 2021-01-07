#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#define MAX 30
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct no
{
    char valor[MAX];
    struct no* prox;
    struct no* ante;
};

typedef struct no No;

No* Cria_Lista(void);

No* Inserir_Comeco(No* inicio, char valor[MAX]);

No* Inserir_Fim(No* inicio, char valor[MAX]);

No* Concatenar(No* lista1, No* lista2);
#endif // LISTA_H_INCLUDED

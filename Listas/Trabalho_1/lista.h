#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#define MAX 30
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct no
{
    int matricula;
    char nome[MAX];
    float salario;
    struct no *proximo;
};

typedef struct no No;

No* Cria_lista();

No* Inserir(No *inicio, int mat, float sal, char n[]);

void Mostrar(No *inicio);

int Verificar_matricula(No *inicio, int *matricula);

#endif // LISTA_H_INCLUDED


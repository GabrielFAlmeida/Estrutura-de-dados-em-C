#ifndef PRIORITY-FIFO_H_INCLUDED
#define PRIORITY-FIFO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct paciente{
    char nome[40];
    int idade;
    char plano[20];
    struct paciente *prox;
};

typedef struct paciente Elem;

Elem* inserirNovo(Elem *inicio, char nome[], int idade, char plano[]);
Elem *removeFila(Elem *inicio);
void imprimeFila(Elem *inicio);
void mostraDadosProximo(Elem *inicio);


#endif // PRIORITY-FIFO_H_INCLUDED

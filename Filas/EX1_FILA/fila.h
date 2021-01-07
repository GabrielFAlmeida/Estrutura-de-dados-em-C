#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#define MAX_FILA 10
#include <stdio.h>
#include <stdlib.h>

struct fila
{
    int fila[MAX_FILA];
    int Inicio;
    int Fim;
    int Num_elementos; //numro de elementos na fila
};

typedef struct fila* Fila;


// Criar uma fila vazia
Fila Cria_fila();

// Inserir um nodo no final da fila
int Inserir(Fila, int); //retorna 1 se inseriu e 0 se n�o inseriu

//Excluir o nodo do in�cio da fila
int Remover(Fila f);

// Consultar  nodo no inicio da fila
int Consultar(Fila f);

//Liberar �rea alocada para a fila
void Libera_fila(Fila f);

//Verificar se fila est� cheia
int E_cheia(Fila f); //retorna 1 se estiver e 0 se n�o estiver

//Verificar se fila est� vazia
int E_vazia(Fila f); //retorna 1 se estiver vazia e 0 se n�o estiver

#endif // FILA_H_INCLUDED

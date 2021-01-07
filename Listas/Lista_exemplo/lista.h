#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

struct no
{
    int info;

    struct no *prox;
};

typedef struct no No;


No* cria_lista();//retorna um ponteiro para no, ou seja, o inicio da lista

No* Inserir(No *inicio, int valor);

No* Remover(No *inicio, int valor);

void Mostrar(No *inicio);

#endif // LISTA_H_INCLUDED

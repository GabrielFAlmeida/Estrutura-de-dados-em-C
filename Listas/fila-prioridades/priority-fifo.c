#include "priority-fifo.h"



Elem* inserirNovo(Elem *inicio, char nome[], int idade, char plano[]){

    Elem *novo = (Elem*) malloc(sizeof(Elem));

    if(novo != NULL){
        strcpy(novo->nome, nome);
        strcpy(novo->plano, plano);
        novo->idade = idade;

        if(inicio == NULL){
            inicio = novo;
            novo->prox = NULL;
        }else{
            Elem *atual = inicio;
            Elem *ant = NULL;
            while(atual != NULL){
                if(idade > atual->idade){
                    break;
                }
                ant = atual;
                atual = atual->prox;
            }
            novo->prox = atual;
            if(atual == inicio){
                inicio = novo;
            }else{
                ant->prox = novo;
            }
        }
    }

    return inicio;
}

Elem *removeFila(Elem *inicio){

    if(inicio != NULL){
        Elem *aux = inicio;
        inicio = inicio->prox;
        free(aux);
        aux = NULL;
    }

    return inicio;
}

void mostraDadosProximo(Elem *inicio){

    if(inicio == NULL){
        printf("Lista vazia!\n");
    }else{
        printf("Nome: %s\n", inicio->nome);
        printf("Plano: %s\n", inicio->plano);
        printf("Idade: %d\n", inicio->idade);
    }
}

void imprimeFila(Elem *inicio){

    if(inicio == NULL){
        printf("A fila esta vazia.\n");
    }else{
        int i = 1;
        while(inicio != NULL){
            printf("%d. Nome: %s\n", i++, inicio->nome);
            inicio = inicio->prox;
        }
    }
}


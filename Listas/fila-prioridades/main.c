#include "priority-fifo.h"
#include <windows.h>

void menu(int *op);

int main()
{
    Elem *fi = NULL;
    int op = 0;

    do{

        menu(&op);

        switch(op){
            case 1:{
                char nome[40], plano[20];
                int idade;
                printf("\nNome do paciente: ");
                fflush(stdin);
                gets(nome);
                printf("Plano: ");
                fflush(stdin);
                gets(plano);
                printf("Idade: ");
                scanf("%d", &idade);
                fi = inserirNovo(fi, nome, idade, plano);
            }
            break;
            case 2:
                mostraDadosProximo(fi);
                system("pause");
                break;
            case 3:
                fi = removeFila(fi);
                break;
            case 4:
                imprimeFila(fi);
                system("pause");
                break;
            case 5:
                printf("\nOBRIGADO POR UTILIZAR NOSSO SISTEMA!!!\n\n");
                break;
        }

    }while(op != 5);

    return 0;
}

void menu(int *op){

    do{
        system("cls");
        printf("\n==============================================================");
        printf("\n------------ CLINICA DE ESTETICA XPTO UNIVERSAL --------------");
        printf("\n==============================================================");
        printf("\n ------------------------------------------------------------\n");
        printf("| 1. Incluir na fila.                                        |\n");
        printf("| 2. Mostrar proximo da fila.                                |\n");
        printf("| 3. Remover proximo da fila.                                |\n");
        printf("| 4. Imprimir fila.                                          |\n");
        printf("| 5. Sair do programa.                                       |\n");
        printf(" ------------------------------------------------------------\n");
        printf("Sua opcao: ");
        scanf("%d", op);

        if(*op < 1 || *op > 5){
            printf("!!! OPCAO INVALIDA. TENTE NOVAMENTE !!!");
            Sleep(1500);
        }

    }while(*op < 1 || *op > 5);
}

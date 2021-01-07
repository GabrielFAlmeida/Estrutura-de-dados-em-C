#include "lista.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opc;
    char valor[MAX];
    No *lista1;
    No *lista2;
    No *lista3;
    lista1 = Cria_Lista();
    lista2 = Cria_Lista();
    lista3 = Cria_Lista();

    do
    {
        system("cls");
        printf("=============== MENU DE OPÇÕES============\n");
        printf("1 - Adicionar a lista 1\n");
        printf("2 - Adicionar a lista 2\n");
        printf("3 - Concatenar as listas\n");
        printf("4 - Finalizar\n");
        printf("=========================================\n");
        printf("Digite a opção desejada..: \n");
        scanf("%d",&opc);
        if(opc==1)
        {
            system("cls");
            printf("Digite o valor..:\n");
            fflush(stdin);
            gets(valor);
            lista1 = Inserir_Fim(lista1, valor);
        }
        else
        {
            if(opc==2)
            {
                system("cls");
                printf("Digite o valor..:\n");
                fflush(stdin);
                gets(valor);
                lista2 = Inserir_Fim(lista2, valor);
            }
            else
            {
                if(opc==3)
                {
                    system("cls");
                    lista3 = Concatenar(lista1, lista2);
                    while(lista3!=NULL)
                    {
                        printf("%s\t",lista3->valor);
                        lista3 = lista3->prox;
                    }
                    printf("\n");
                    system("pause");
                }
            }
        }
    }
    while(opc!=4);
}

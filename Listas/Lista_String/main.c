#include "lista.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, opc;
    char nome[MAX];

    No *lista;

    lista = cria_lista();

    do
    {
        system("cls");
        printf("=============== MENU DE OPÇÕES============\n");
        printf("1 - Adicionar a lista\n");
        printf("2 - Remover da lista\n");
        printf("3 - Consultar a lista\n");
        printf("4 - Finalizar\n");
        printf("=========================================\n");
        printf("Digite a opção desejada..: \n");
        scanf("%d",&opc);
        if(opc==1)
        {
            system("cls");
            printf("Digite o seu nome..:\n");
            fflush(stdin);
            gets(nome);
            lista = Inserir(lista, nome);
        }
        else
        {
            if(opc==2)
            {
                system("cls");
                printf("Digite o nome a ser removido..:\n");
                fflush(stdin);
                gets(nome);
                lista = Remover(lista, nome);
            }
            else
            {
                if(opc==3)
                {
                    system("cls");
                    Mostrar(lista);
                }
                else
                {
                    system("cls");
                    printf("...OBRIGADO POR UTILIZAR O SISTEMA...\n");
                }
            }
        }


        //lista = Remover(lista, n);

    }
    while(opc!=4);
    return 0;
}

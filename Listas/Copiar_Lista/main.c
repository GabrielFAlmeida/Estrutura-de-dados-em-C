#include "lista.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opc, valor;
    No *lista1;
    No *lista2;
    lista1 = Cria_Lista();
    lista2 = Cria_Lista();

    do
    {
        system("cls");
        printf("=============== MENU DE OPÇÕES============\n");
        printf("1 - Adicionar a lista \n");
        printf("2 - Copiar elementos da lista \n");
        printf("3 - Finalizar\n");
        printf("=========================================\n");
        printf("Digite a opção desejada..: \n");
        scanf("%d",&opc);
        if(opc==1)
        {
            system("cls");
            printf("Digite o valor..:\n");
            scanf("%d",&valor);
            lista1 = Inserir_Fim(lista1, valor);
        }
        else
        {
            if(opc==2)
            {
                system("cls");
                printf("Digite o número de elementos a ser copiados..:\n");
                scanf("%d",&valor);
                lista2 = Copia_Lista(lista1, valor);
                while(lista2!=NULL)
                {
                    printf("%d\t",lista2->numero);
                    lista2 = lista2->prox;
                }
                printf("\n");
                system("pause");
            }
        }
    }
    while(opc!=3);
}

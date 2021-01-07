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
        printf("2 - Consultar a lista \n");
        printf("3 - Filtrar a lista\n");
        printf("4 - Finalizar\n");
        printf("=========================================\n");
        printf("Digite a opção desejada..: \n");
        scanf("%d",&opc);
        if(opc==1)
        {
            system("cls");
            printf("Digite o valor..:\n");
            scanf("%d",&valor);
            lista1 = Inserir_Comeco(lista1, valor);
        }
        else
        {
            if(opc==2)
            {
                system("cls");
                Consultar_Lista(lista1);
                system("pause");
            }
            else
            {
                if(opc==3)
                {
                    system("cls");
                    printf("Digite o valor para filtro..:\n");
                    scanf("%d",&valor);
                    lista2 = Filtro(lista1, valor);
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
    }
    while(opc!=4);
}

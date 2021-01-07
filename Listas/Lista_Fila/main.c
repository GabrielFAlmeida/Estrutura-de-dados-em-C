#include "lista.h"

int Verificar_opc(int opc)
{
    while(opc>3 || opc<0)
    {
        system("cls");
        printf("Opção inválida, redigite..: \n");
        scanf("%d",&opc);
    }
    return opc;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    No* fila;
    No* fim;
    int num, opc;
    fila = Cria_Lista();
    fim = Cria_Lista();
    do
    {
        system("cls");
        printf("=============== MENU DE OPÇÕES =============\n");
        printf("1 - Inserir elemento\n");
        printf("2 - Remover elemento\n");
        printf("3 - Mostrar a fila\n");
        printf("============================================\n");
        printf("Digite uma das opções acima..: \n");
        scanf("%d",&opc);
        if(opc==1)
        {
            system("cls");
            printf("Informe o valor..: \n");
            scanf("%d",&num);
            fila = Inserir_Final(fila, num);
        }
        else
        {
            if(opc==2)
            {
                system("cls");
                fila = Remover_Comeco(fila);
            }
            else
            {
                if(opc==3)
                {
                    system("cls");
                    Mostrar(fila);
                    system("pause");
                }
                else
                {
                    printf("\n...Obrigado por usar nosso sistema...\n");
                }
            }
        }
    }while(opc!=0);
    return 0;
}

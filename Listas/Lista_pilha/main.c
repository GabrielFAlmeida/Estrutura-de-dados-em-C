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
    No* pilha;
    int num, opc;
    pilha = Cria_Lista();
    do
    {
        system("cls");
        printf("=============== MENU DE OPÇÕES =============\n");
        printf("1 - Inserir elemento\n");
        printf("2 - Remover elemento\n");
        printf("3 - Mostrar a pilha\n");
        printf("============================================\n");
        printf("Digite uma das opções acima..: \n");
        scanf("%d",&opc);
        if(opc==1)
        {
            system("cls");
            printf("Informe o valor..: \n");
            scanf("%d",&num);
            pilha = Inserir_Comeco(pilha, num);

        }
        else
        {
            if(opc==2)
            {
                system("cls");
                pilha = Remover_Comeco(pilha);
            }
            else
            {
                if(opc==3)
                {
                    system("cls");
                    Mostrar(pilha);
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

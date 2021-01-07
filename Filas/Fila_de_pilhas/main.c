#include "fila.h"

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int numero, opc, aux;
    Fila De_Pilha = Criar_Fila();
    do
    {
        system("cls");
        printf("============ MENU DE AÇÕES ===========\n");
        printf(" 1 - Inserir pilhas na fila\n");
        printf(" 2 - Retirar pilhas da fila\n");
        //printf(" 3 - Consultar elementos de uma pilha\n");
        printf(" 4 - Inserir elementos em uma pilha\n");
        printf(" 5 - Remover elementos de uma pilha\n");
        printf(" 6 - Finalizar\n");
        printf("======================================\n");
        printf("Digite a opção desejada..: \n");
        scanf("%i",&opc);
        if(opc == 1)
        {
            system("cls");
            numero = Inserir_Fila(De_Pilha);
        }
        else
        {
            if(opc == 2)
            {
                system("cls");
                numero = Remover_Fila(De_Pilha);
            }
            else
            {
                /*if(opc == 3)
                {
                    system("cls");
                    Consulta_Pilha(De_Pilha);
                }
                else
                {*/
                    if(opc == 4)
                    {
                        system("cls");
                        printf("Digite a posição da pilha que irá receber o elemento..: \n");
                        scanf("%d",&aux);
                        Inserir_Pilha(De_Pilha, aux);
                    }
                    else
                    {
                        if(opc == 5)
                        {
                            system("cls");
                            printf("Digite a posição da pilha que irá perder o elemento..: \n");
                            scanf("%d",&aux);
                            Remover_Pilha(De_Pilha, aux);
                        }
                        else
                        {
                            system("cls");
                            printf("\n... OBRIGADO POR USAR NOSSOS SISTEMAS ...\n");
                        }
                    }
                }
            }
        }
    while(opc != 6);
    return 0;
}

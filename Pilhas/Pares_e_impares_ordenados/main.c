#include "pilha.h"


int main()
{
    setlocale (LC_ALL, "Portuguese");
    system("color 3B");
    int numero, opc, n;
    Pilha p = Criar_Pilha();
    do
    {
        system("cls");
        printf("========================== MENU DE A��ES =======================\n");
        printf(" 1 - Inserir elementos na pilha\n");
        printf(" 2 - Retirar elementos da pilha\n");
        printf(" 3 - Consultar elementos da pilha\n");
        printf(" 4 - Ordenar a pilha com �mpares no topo e pares na base\n");
        printf(" 5 - Finalizar\n");
        printf("================================================================\n");
        printf("Digite a op��o desejada..: \n");
        scanf("%i",&opc);
        if(opc == 1)
        {
            system("cls");
            if(p->topo < MAX-1)
            {
                printf("Digite o n�mero desejado..: \n");
                scanf("%i",&n);
                numero = Inserir(&p, n);
            }
            else
            {
                printf("Imposs�vel inserir, pilha cheia.\n");
                system("pause");
            }
        }
        else
        {
            if(opc == 2)
            {
                system("cls");
                if(p->topo == -1)
                {
                    printf("Imposs�vel retirar, pilha vazia.\n");
                    system("pause");
                }
                else
                {
                    numero = Remover(&p);
                }
            }
            else
            {
                if(opc == 3)
                {
                    system("cls");
                    Consulta_pilha(p);
                }
                else
                {
                    if(opc == 4)
                    {
                        system("cls");
                        Ordenar_pilha(&p);
                    }
                }
            }
        }
    }
    while(opc != 5);
    return 0;
}

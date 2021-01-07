#include "pilha.h"


int main()
{
    setlocale (LC_ALL, "Portuguese");
    system("color 3B");
    int numero, opc;
    Pilha p = Criar_Pilha();
    do
    {
        system("cls");
        printf("========== MENU DE AÇÕES ==========\n");
        printf(" 1 - Inserir elementos na pilha\n");
        printf(" 2 - Retirar elementos da pilha\n");
        printf(" 3 - Consultar elementos da pilha\n");
        printf(" 4 - Destruir a pilha\n");
        printf(" 5 - Finalizar\n");
        printf("===================================\n");
        printf("Digite a opção desejada..: \n");
        scanf("%i",&opc);
        if(opc == 1)
        {
            system("cls");
            numero = Inserir(&p);
        }
        else
        {
            if(opc == 2)
            {
                system("cls");
                numero = (int)Remover(&p);
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
                        Destroi_pilha(&p);
                        system("cls");
                        printf("A pilha foi destruída, programa finalizado.");
                        opc = 5;
                    }
                }
            }
        }
    }
    while(opc != 5);
    return 0;
}

#include "pilha.h"


int main()
{
    setlocale (LC_ALL, "Portuguese");
    system("color 3B");
    int numero, opc;
    Pilha p = Criar_Pilha();
    Pilha aux = Criar_Pilha();
    do
    {
        system("cls");
        printf("========== MENU DE AÇÕES ==========\n");
        printf(" 1 - Inserir elementos na pilha\n");
        printf(" 2 - Retirar elementos da pilha\n");
        printf(" 3 - Inverter elementos da pilha\n");
        printf(" 4 - Consultar elementos da pilha\n");
        printf(" 5 - Destruir a pilha\n");
        printf(" 6 - Finalizar\n");
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
                    Inverter(&p, &aux);
                }
                else
                {
                    if(opc == 4)
                    {
                        system("cls");
                        Consulta_pilha(p);
                        Consulta_pilha(aux);
                    }
                    else
                    {
                        if(opc == 5)
                        {
                            system("cls");
                            Destroi_pilha(&p);
                            system("cls");
                            printf("A pilha foi destruída, programa finalizado.");
                            opc = 6;
                        }
                    }
                }
            }
        }
    }
    while(opc != 6);
    return 0;
}

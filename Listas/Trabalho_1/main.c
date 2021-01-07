#include "lista.h"

//=====================================================================================================================
int Verificar_opc(int opc)
{
    while(opc<1 || opc>4)
    {
        system("cls");
        printf("Op��o inv�lida, digite novamente..: \n");
        scanf("%d",&opc);
    }
    return opc;
}
//=====================================================================================================================
int main()
{
    setlocale(LC_ALL, "Portuguese");
    No *func;
    char nome[MAX], maior[MAX];
    int opc, matricula, i, j, aux, t;
    float salario;
    t = 0;
    func = Cria_lista();
    do
    {
        system("cls");
        printf("============================= MENU ============================\n");
        printf("1 - Inserir funcion�rios\n");
        printf("2 - Mostrar os funcion�rios\n");
        printf("3 - Descobrir o nome mais longo e mostrar o nome final\n");
        printf("4 - Sair\n");
        printf("===============================================================\n");
        printf("Digite uma das op��es..: \n");
        scanf("%d",&opc);
        opc = Verificar_opc(opc);
        if(opc == 1)
        {
            system("cls");
            printf("Digite o nome do cliente..:\n");
            fflush(stdin);
            gets(nome);
            if(strlen(nome)>t)
            {
                strcpy(maior, nome);
            }
            printf("Digite a matr�cula do cliente..:\n");
            scanf("%d",&matricula);
            i = Verificar_matricula(func, &matricula);
            while(i==1)
            {
                printf("Digite novamente, a matr�cula j� est� sendo usada..: \n");
                scanf("%d",&matricula);
                i=0;
                i=Verificar_matricula(func, &matricula);
            }
            printf("Digite o sal�rio do cliente..:\n");
            scanf("%f",&salario);
            func = Inserir(func, matricula, salario, nome);
        }
        else
        {
            if(opc==2)
            {
                system("cls");
                Mostrar(func);
                system("pause");
            }
            else
            {
                if(opc==3)
                {
                    aux = strlen(maior);
                    for(i=aux; maior[i]!=' '; i--)
                    {
                        if(i==0)
                        {
                            break;
                        }
                    }
                    if(i!=0)
                    {
                        i++;
                    }
                    for(j=i; j<aux; j++)
                    {
                        printf("%c",maior[j]);
                    }
                    printf("\n");
                    system("pause");
                }
                else
                {
                    system("cls");
                    printf("\n OBRIGADO POR USAR NOSSO SISTEMA \n");
                }
            }
        }
    }
    while(opc!=4);
    return 0;
}
//=====================================================================================================================

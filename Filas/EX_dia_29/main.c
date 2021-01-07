#include "fila.h"

int verificar_opc(int opc)
{
    while(opc<1 || opc>4)
    {
        system("cls");
        printf("Op��o inv�lida, digite novamente..: \n");
        scanf("%d",&opc);
    }
    return opc;
}
int verificar_caixa(int cx, int n)
{
    if(cx>=n)
    {
        system("cls");
        printf("Caixa inexistente, digite novamente..: \n");
        scanf("%d",&cx);
    }
    return cx;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, opc, cx, i, r;
    char nome[100], a[100];
    Fila pessoas;
    Caixa caixas;
    pessoas = Cria_fila();
    printf("Informe quantos caixas est�o em funcionamento..: \n");
    scanf("%d",&n);
    caixas = (Caixa)malloc(sizeof(struct caixa)*n);
    for(i=0; i<n; i++)
    {
        caixas[i].nro = i;
        caixas[i].historico = Cria_fila();
    }
    do
    {
        system("cls");
        printf("================= MENU DE OP��ES =================\n");
        printf("1 - Inserir pessoas na fila do banco\n");
        printf("2 - Chamar o pr�ximo\n");
        printf("3 - Verificar o hist�rico de um caixa\n");
        printf("4 - Finalizar\n");
        printf("==================================================\n");
        printf("Digite a op��o desejada..: \n");
        scanf("%d",&opc);
        opc = verificar_opc(opc);
        printf("==================================================\n");
        if(opc==1)
        {
            system("cls");
            printf("Digite o nome desejado..: \n");
            fflush(stdin);
            gets(nome);
            Inserir(pessoas, nome);
            system("pause");
        }
        else
        {
            if(opc==2)
            {
                system("cls");
                r = Remover(pessoas,a);
                if(r!=0)
                {
                    printf("Informe o caixa que ir� atender a pessoa chamada (a contagem come�a em zero)..: \n");
                    scanf("%d",&cx);
                    cx = verificar_caixa(cx, n);
                    Inserir(caixas[cx].historico, a);
                }
                else
                {
                    printf("Imposs�vel chamar a pr�xima pessoa, a fila est� vazia.\n");
                }
                system("pause");
            }
            else
            {
                if(opc==3)
                {
                    system("cls");
                    printf("Informe o caixa a ser consultado..: \n");
                    scanf("%d",&cx);
                    Consultar(caixas[cx].historico, cx);
                    system("pause");
                }
                else
                {
                    system("cls");
                    printf("Obrigado por usar nosso sistema.\n");
                }
            }
        }
    }
    while(opc!=4);
    return 0;
}

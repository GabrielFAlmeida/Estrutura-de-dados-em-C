
#include "lista.h"

char Verificar_resp(char r)
{
    while(r!='n'||r!='N'||r!='s'||r!='s')
    {
        system("cls");
        printf("Resposta inválida, redigite..: \n");
        scanf("%c",&r);
    }
    return r;
}
int main()
{
    int n, s;
    char resp;

    No *lista;

    lista = cria_lista();

    do
    {
        printf("Digite o valor a ser inserido..:\n");
        scanf("%d",&n);

        lista = Inserir(lista, n);

        printf("Digite o valor a ser removido..:\n");
        scanf("%d",&s);

        lista = Remover(lista, n);

        Mostrar(lista);

        printf("Deseja repetir:\n S - para repetir \n N - para sair \n Resposta..:\n");
        scanf("%c",&resp);
        resp = Verificar_resp(resp);
    }while(resp=='N' || resp=='n');
    return 0;
}

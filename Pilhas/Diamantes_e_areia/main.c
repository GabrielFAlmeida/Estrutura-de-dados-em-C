#include "pilha.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Pilha P;
    int i, j, n, aux, cont;
    cont = 0;
    char minerio[MAX];
    printf("Digite a quantidade de minas testadas..: \n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        P = Cria_Pilha();
        printf("Digite a sequ�ncia de min�rios..: \n");
        fflush(stdin);
        gets(minerio);
        for(j=0; j<strlen(minerio); j++)
        {
            if(minerio[j] == '<' || minerio[j] == '>')
            {
                aux = Inserir_Pilha(&P, minerio[j]);
                aux = Remover_Pilha(&P, &cont);
            }
        }
        free(P);
        P = NULL;
        printf("\nA quantidade de diamantes �..: %d.\n\n",cont);
        cont = 0;
    }
    return 0;
}

#include "pilha.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Pilha p;
    char expressao[MAX];
    int i, r;
    p = Cria_Pilha();
    printf("Digite a express�o matem�tica..: \n");
    gets(expressao);
    printf("\n\n");
    for(i=0; i<MAX; i++)
    {
        if(expressao[i] == '(' || expressao[i] == ')')
        {
            if(expressao[0] != ')')
            {
                r = Inserir(&p, expressao[i]);
                r = Remover(&p);
            }
            else
            {
                printf("A express�o est� fora do padr�o 2.\n");
                i = MAX;
            }
        }
    }
    if(expressao[0]!=')')
    {
        if(E_vazia(p)==1)
        {
            printf("A express�o est� dentro dos padr�es.\n");
        }
        else
        {
            printf("A express�o est� fora do padr�o 1.\n");
        }
    }
    return 0;
}

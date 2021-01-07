#include "pilha.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Pilha p;
    char expressao[MAX];
    int i, r;
    p = Cria_Pilha();
    printf("Digite a expressão matemática..: \n");
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
                printf("A expressão está fora do padrão 2.\n");
                i = MAX;
            }
        }
    }
    if(expressao[0]!=')')
    {
        if(E_vazia(p)==1)
        {
            printf("A expressão está dentro dos padrões.\n");
        }
        else
        {
            printf("A expressão está fora do padrão 1.\n");
        }
    }
    return 0;
}

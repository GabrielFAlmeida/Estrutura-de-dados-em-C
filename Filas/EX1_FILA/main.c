#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "fila.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Fila f;
    int l, i;
    f = Cria_fila();
    for(i=0; i<5; i++)
    {
        printf("Digite o número a ser inserido..: \n");
        scanf("%i",&l);
        l = Inserir(f, l);

    }
    for(i=0; i<5; i++)
    {
        l = Remover(f);
        printf("%Removido : %d\n",l);

    }
    return 0;
}

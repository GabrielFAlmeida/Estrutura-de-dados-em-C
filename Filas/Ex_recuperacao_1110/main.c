#include "fila.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Fila f;
    int n, i, removidos[MAX], k;
    do
    {
        f = Cria_fila();
        printf("Digite o número de elementos a serem inseridos..: \n");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            Inserir(f, i);
        }
        for(i=0; i<n; i++)
        {
            removidos[i] = Remover(f);
            k = Remover(f);
            Inserir(f, k);
        }
        if(n!=0)
        {
            printf("Cartas removidas..: ");
        }
        for(i=0; i<n; i++)
        {
            if(i==n-1)
            {
                printf("\n");
                printf("Remanescente..: %d",removidos[n-1]);
            }
            else
            {
                printf("%d ",removidos[i]);
            }
        }
        Libera_fila(f);
        printf("\n======================================================================\n");
    }
    while(n!=0);
    return 0;
}

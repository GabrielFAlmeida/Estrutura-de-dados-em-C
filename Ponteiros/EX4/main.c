#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcular(int n1, int n2, int *soma,int *produto)
{
    *soma = n1+n2;
    *produto = n1*n2;
    if((n1+n2<-32768) || (n1+n2>32768))
    {
        return -1;
    }
    else if ((n1*n2<-32768) || (n1*n2>32768))
             {
                 return -1;
             }
             else if(n1==n2)
             {
                 return 1;
             }
             else
             {
                     return 0;
             }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n1, n2;
    int soma, produto;
    printf("\n Informe o valor de n1..: ");
    scanf("%d",&n1);
    printf("\n Informe o valor de n2..: ");
    scanf("%d",&n2);
    system("cls");
    printf("O resultado é..: %i \n",calcular(n1, n2,&soma,&produto));
    printf("A soma dos elementos é..: %i \n",soma);
    printf("O produto dos elementos é..: %i \n",produto);
    return 0;
}

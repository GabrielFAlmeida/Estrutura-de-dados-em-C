#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam1 4

struct carros
{
    char marca[15];
    char ano[5];
    double preco;
};
int main()
{
    int i;
    double p;
    struct carros c[tam1];
    setlocale(LC_ALL, "Portuguese");
    do
    {
        for(i=0; i<tam1; i++)
        {
            printf("Digite a marca do %i° carro..: \n",i+1);
            fflush(stdin);
            gets(c[i].marca);
            printf("Digite o ano do  %i° carro...: \n",i+1);
            fflush(stdin);
            gets(c[i].ano);
            printf("Digite o preço do %i° carro..: \n",i+1);
            fflush(stdin);
            scanf("%lf",&c[i].preco);
            while(c[i].preco<=00)
            {
                system("cls");
                printf("Valor inválido, digite outro..: \n");
                scanf("%lf",&c[i].preco);
            }
            system("cls");
        }
        printf("Digite o valor desejado para a comparação, ou zero para parar..: ");
        scanf("%lf",&p);
        system("cls");
        for(i=0; i<tam1; i++)
        {
            if(c[i].preco>p)
            {
                printf("O %i° carro, de marca %s e ano %s é mais caro do que o valor informado, e custa: R$ %.2lf\n", i+1, c[i].marca, c[i].ano, c[i].preco);
            }
        }
        printf("Digite qualquer tecla para continuar...");
        getchar();
    }
    while (p>0.0);
    return 0;
}

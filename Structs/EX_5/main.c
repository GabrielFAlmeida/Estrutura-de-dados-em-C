#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 5

struct voo
{
    int cod_aeroporto_origem;
    int cod_aeroporto_destino;
};
struct aeroporto
{
    int cod;
    int voo_sai;
    int voo_entra;
};
int main()
{
    setlocale(LC_ALL, "Portuguese");
    struct voo v[tam];
    struct aeroporto a[tam];
    int i, z, k, j;
    z = k = 0;
    char resp;
    for(i=0; i<tam; i++)
    {
        printf("Digite o código do %i° aeroporto..: ",i+1);
        fflush(stdin);
        scanf("%i",&a[i].cod);
        while(a[i].cod<0 || a[i].cod>4)
        {
            system("cls");
            printf("Código inválido, redigite..:  ");
            scanf("%i",&a[i].cod);
        }
        a[i].voo_sai = 0;
        a[i].voo_entra= 0;
        system("cls");
    }
    for(i=0; i<tam; i++)
    {
        printf("Digite o código do aeroporto de origem do %i° voo..:  ",i+1);
        fflush(stdin);
        scanf("%i",&v[i].cod_aeroporto_origem);
        while(v[i].cod_aeroporto_origem<0 || v[i].cod_aeroporto_origem>4)
        {
            system("cls");
            printf("Código inválido, redigite..:  ");
            scanf("%i",&v[i].cod_aeroporto_origem);
        }
        z = v[i].cod_aeroporto_origem;
        a[z].voo_sai = a[z].voo_sai+1;
        printf("Digite o código do aeroporto de destino do %i voo..:  ",i+1);
        fflush(stdin);
        scanf("%i",&v[i].cod_aeroporto_destino);
        while(v[i].cod_aeroporto_destino<0 || v[i].cod_aeroporto_destino>4)
        {
            system("cls");
            printf("Código inválido, redigite..:  ");
            scanf("%i",&v[i].cod_aeroporto_destino);
        }
        k = v[i].cod_aeroporto_destino;
        a[k].voo_entra = a[k].voo_entra+1;
    }
    i = 0;
    printf("=================================== DADOS PROCESSADOS =========================================\n\n");
    for(j=0; j<tam; j++)
    {
            if(a[i].cod==i)
            {
                printf("O número de voos que saiu do aeroporto de código %i foi....: %i \n",a[i].cod,a[i].voo_sai);
                printf("O número de voos que chegou no aeroporto de código %i foi..: %i \n\n",a[i].cod,a[i].voo_entra);
            }
    }
    printf("===============================================================================================\n\n");
    for(i=0; i<tam; i++)
    {
        printf("%i° VOO : \n Saiu do aeroporto de código: %i \n Chegou no aeroporto de código: %i\n",i+1,v[i].cod_aeroporto_origem,v[i].cod_aeroporto_destino);
    }
    printf("\n");
    printf("===============================================================================================\n\n");
    return 0;
}

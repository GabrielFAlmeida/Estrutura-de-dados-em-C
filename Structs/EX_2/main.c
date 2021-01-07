#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define tam 5

struct aluno
{
    char nome[30];
    char n_matricula[40];
    float n1;
    float n2;
    float n3;
    float md;
};
int main()
{
    float maior_nota, maior_md, menor_md;
    int k, z, j, i;
    maior_md = maior_nota = 0.0;
    menor_md = 10000.0;
    setlocale(LC_ALL, "Portuguese");
    struct aluno a[tam];
    for(i=0; i<tam; i++)
    {
        printf("Digite o nome do %i aluno..: \n",i+1);
        fflush(stdin);
        gets(a[i].nome);
        printf("Digite o número de matrícula do %i° aluno..: \n",i+1);
        fflush(stdin);
        gets(a[i].n_matricula);
        printf("Digite o primeira nota do %i° aluno..: \n",i+1);
        fflush(stdin);
        scanf("%f",&a[i].n1);
        printf("Digite o segunda nota do %i° aluno..: \n",i+1);
        fflush(stdin);
        scanf("%f",&a[i].n2);
        printf("Digite o terceira nota do %i° aluno..: \n",i+1);
        fflush(stdin);
        scanf("%f",&a[i].n3);
        a[i].md = (a[i].n1+a[i].n2+a[i].n3)/3;
        system("cls");
    }
    for(i=0; i<tam; i++)
    {
        if(a[i].n1>=maior_nota)
        {
            maior_nota = a[i].n1;
            k = i;
        }
        if(a[i].md>=maior_md)
        {
            maior_md = a[i].md;
            z = i;
        }
        if(a[i].md<=menor_md)
        {
            menor_md = a[i].md;
            j = i;
        }
    }
    system("cls");
    printf("====================================== DADOS PROCESSADOS ======================================\n\n");
    printf(" O aluno com a maior média é %s, com nota..: %.3f\n",a[z].nome, maior_md);
    printf(" O aluno com a menor média é %s, com nota..: %.3f\n",a[j].nome, menor_md);
    printf(" O aluno com a maior nota na primeira prova é %s, com nota..: %.3f\n\n",a[k].nome, maior_nota);
    for(i=0; i<tam; i++)
    {
        if(a[i].md>=6.0)
        {
            printf("O aluno %s foi aprovado, com média..: %.3f\n", a[i].nome, a[i].md);
        }
        else
        {
            printf("O aluno %s foi reprovado, com média..: %.3f\n", a[i].nome, a[i].md);
        }
        printf("\n");
    }
    printf("===============================================================================================\n\n");
    return 0;
}

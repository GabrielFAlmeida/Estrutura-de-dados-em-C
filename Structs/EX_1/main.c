/*
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 5

struct aluno
{
    char nome[30];
    char n_matricula[40];
    char curso[40];
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    struct aluno a[tam];
    for(i=0; i<tam; i++)
    {
        printf("Digite o nome do %i aluno..: \n",i+1);
        gets(a[i].nome);
        printf("Digite o n�mero de matr�cula do %i� aluno..: \n",i+1);
        gets(a[i].n_matricula);
        printf("Digite o curso do %i� aluno..: \n",i+1);
        gets(a[i].curso);
        system("cls");
    }
    system("cls");
    printf("=============================   DADOS COLETADOS =================================\n");
    for(i=0; i<tam; i++)
    {
        printf("||  Nome[%i] = %s   ||", i+1 , a[i].nome);
        printf("||  N�mero de matr�cula[%i] = %s  ||", i+1, a[i].n_matricula);
        printf("||  Curso[%i] = %s  ||\t",i+1, a[i].curso);
        printf("\n");
    }
    printf("=================================================================================");
    return 0;
}

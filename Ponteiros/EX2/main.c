/*
2- Fa�a um programa que:
declare duas vari�veis a e b do tipo float;
declare um ponteiro �p� para o tipo float;
Pe�a que o usu�rio digite um n�mero do tipo real, e o armazene em a;
Imprima o conte�do de a;
Imprima o endere�o de a;
Imprima o conte�do de p;
Imprima o endere�o de p;
Imprima o conte�do do endere�o apontado por p;
Imprima o conte�do de b;
Imprima o endere�o de b;
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, b, *p;
    p = &a;
    printf("Digite um valor para A..: \n");
    scanf("%f",&a);
    printf("Digite um valor para B..: \n");
    scanf("%f",&b);
    system("cls");
    printf("O endere�o de A �..: %i\n",&a);
    printf("O valor de A �..: %.1f\n",a);
    printf("O endere�o de P �..: %i\n",&p);
    printf("O valor de P �..: %i\n",p);
    printf("O valor apontado por P..: %.1f\n",*p);
    printf("O endere�o de B..: %i\n",&b);
    printf("O valor de B..: %.1f\n",b);
    return 0;
}

/*
2- Faça um programa que:
declare duas variáveis a e b do tipo float;
declare um ponteiro “p” para o tipo float;
Peça que o usuário digite um número do tipo real, e o armazene em a;
Imprima o conteúdo de a;
Imprima o endereço de a;
Imprima o conteúdo de p;
Imprima o endereço de p;
Imprima o conteúdo do endereço apontado por p;
Imprima o conteúdo de b;
Imprima o endereço de b;
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
    printf("O endereço de A é..: %i\n",&a);
    printf("O valor de A é..: %.1f\n",a);
    printf("O endereço de P é..: %i\n",&p);
    printf("O valor de P é..: %i\n",p);
    printf("O valor apontado por P..: %.1f\n",*p);
    printf("O endereço de B..: %i\n",&b);
    printf("O valor de B..: %.1f\n",b);
    return 0;
}

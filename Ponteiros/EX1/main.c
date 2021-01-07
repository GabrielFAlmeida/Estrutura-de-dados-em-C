/*Seja x um inteiro e p um ponteiro de inteiro.
 Escreva o trecho de código que determina para x o valor 10, utilizando o ponteiro p1.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, *p, *p1;
    p = &x;
    p1 = p;
    *p1 = 10;
    printf("\nO valor de X é..: %i\n\n",x);
    return 0;
}

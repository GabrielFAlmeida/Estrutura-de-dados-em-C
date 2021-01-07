#include "pilha.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i=0, j=0, z=0, r=0;
    char palavra[MAX], palindromo[MAX], l;
    Pilha P;
    printf("Digite a palavra desejada..: \n");
    fflush(stdin);
    gets(palavra);
    P = Criar_Pilha();
    z = strlen(palavra);
    do
    {
        for(i=;i<z;i++)
        {
        }
        cont = i;
        for(k=; k<; i++)
        {

            int teste = Inserir(&P, palavra[i]);
        }
        for(i=strlen(palavra); i>=0; i--)
        {
            palindromo[j] = Remover(&P);
            j++;
        }
        palindromo[j]='\0';
        printf("%s\n",palindromo);
        if(strcmp(palavra,palindromo) == 0)
        {
            printf("É palíndromo.\n");
        }
        else
        {
            printf("Não é palíndromo.\n");
        }
        j = j+i;
    }
    while(j<z);
    return 0;
}

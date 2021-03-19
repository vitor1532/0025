// arquivo principal, beberá de todas estruturas e funções

#include <stdio.h>
#include <stdlib.h>
#include "input_Usuarios.c"

int main()
{
    int x;
    printf("\t\t ##################################################\n ");
    printf("\t\t ##################################################\n ");
    printf("\t\t ######  Bem Vindo ao Sistema de Cadastros ! ######\n ");
    printf("\t\t ##################################################\n ");
    printf("\t\t ##################################################\n ");
    printf("\n\t\t         Escolha uma das opcoes abaixo: \n");
    printf("\t\t                  1 - Cadastro\n");
    scanf("%i", &x);
    switch (x)
    {
    case 1:
        Cadastro();
        break;

    default:
        break;
    }

    return 0;
}
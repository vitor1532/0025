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
    printf("\t\t                  1 - Cadastro Alunos\n");
    printf("\t\t                  2 - Cadastro Professor\n");
    printf("\t\t                  0 - Sair do Cadastro\n");

    scanf("%i", &x);

    switch (x)
    {
        case 1:
            Aluno();
            return main();
        
        case 2:

            Professor();
            return main();
        
        case 0:

            system ("exit");
            break;

        default:

            return main();
            break;
    }

    return 0;
}
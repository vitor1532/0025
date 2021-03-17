#include <stdio.h>
#include <stdlib.h>

struct professor
{
    
    char nome[70],disciplina[5],endereco[100];
      int cpf, telefone, sala, matricula,slario;

} prof[5];



int main ()
{

    int i;

      for (i =0; i < 5; i++)
      {
        printf ("\nInsira o nome do %i professor: \n", i+1);
          fflush(stdin);
          gets (prof[i].nome);

            printf ("\nInsira o endereco do %i professor: \n", i+1);
              fflush (stdin);
              gets (prof[i].endereco);

      }

       for (i =0; i < 5; i++)
       {
         printf ("%s ", prof[i].nome);

       }
      return 0;
}

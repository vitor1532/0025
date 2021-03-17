#include <stdio.h>
#include <stdlib.h>

struct Endereco
{
    char Cidade[200];
    char Bairro[200];
    char Rua[200];
    int num;
    char complemento[20];
}End[5];
   
int main ()
{
    
    int i;

      for (i =0; i < 5; i++)
      {
        printf ("\nInsira o nome da : \n", i+1);
        fflush(stdin);
        gets (End[i].Cidade);

        printf ("\nInsira o endereco do %i professor: \n", i+1);
        fflush (stdin);
        gets (End[i].Bairro);    
      } 

       for (i =0; i < 5; i++)
       {
         printf ("%s ", End[i].Cidade);
       }
      
    return 0;
}

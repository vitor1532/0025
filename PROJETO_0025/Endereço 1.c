#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>




    struct Endereco
    {
        char name[60];
        char Cidade[200];
        char Bairro[200];
        char Rua[200];
        int num;
        char complemento[20];
    }End[1];

   
int main ()
{
  // Define o valor das páginas de código UTF8 e default do Windows
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();

  // Define codificação como sendo UTF-8
  SetConsoleOutputCP(CPAGE_UTF8);
   
   int i;

      for (i =0; i < 1; i++)
      {
        printf ("\nInsira o seu nome: %d\n", i+1);
          fflush (stdin);
        gets (End[i].name);

            printf ("\nInsira a sua cidade %d: \n", i+1);
              fflush (stdin);
              gets (End[i].Cidade);

            printf ("\nInsira o seu bairro %d : \n", i+1);
              fflush (stdin);
              gets (End[i].Bairro);
            
            printf ("\nInsira a sua Rua %d  : \n", i+1);
              fflush (stdin);
              gets (End[i].Rua);
            
            printf ("\nInsira o numero de sua residencia %i: \n", i+1);
            scanf("%i", &End[i].num);
            
            printf ("\nInsira o complemento %d: \n", i+1);
              fflush (stdin);
              gets (End[i].complemento);
        
     
     
      } 

       for (i =0; i < 1; i++)
       {
         printf ("\n Seu Nome é --> %s \n", End[i].name);
         printf ("\n Sua Cidade é -->%s \n", End[i].Cidade);
         printf ("\n Seu Bairro é -->%s \n",End[i].Bairro);
         printf ("\n Sua Rua é -->%s \n",End[i].Rua);
         printf ("\n Numero da sua residencia é -->%i \n",End[i].num);
         printf ("\n Numero do complemento é -->%s \n",End[i].complemento);
       
       
       
       
       
       }
      return 0;
}
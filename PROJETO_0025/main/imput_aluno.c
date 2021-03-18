#include <stdio.h>
#include <stdlib.h>
#include "estruturas.c"

int main ()
{
    //definindo vetor da strutura Aluno
    struct Aluno c[2];
    
   
      int i = 0,cont = 0,aux =0;
    //c[i].endereco.cidade

    //pegando o imput do usuario/aluno
    while ( cont == 0){
        
        printf ("\nInsira o nome do %i aluno:\n", i +1);
          fflush(stdin);
          gets (c[i].nome);

        printf ("\nInsira o CPF do aluno %s: \n",c[i].nome);
          scanf ("%i", &c[i].cpf);

        printf ("\nInsira o endereco do aluno %s: \n",c[i].nome);

            printf ("\nCidade: \n");
              fflush(stdin);
              gets (c[i].endereco.cidade);

            printf ("\nBairro: \n");
              fflush(stdin);
              gets (c[i].endereco.bairro);

            printf ("\nRua: \n");
              fflush(stdin);
              gets (c[i].endereco.rua);

            printf ("\nNumero: \n");
              scanf ("%i", &c[i].endereco.num);

        printf ("\nInsira a data de nascimento do aluno %s \n",c[i].nome);

            printf  ("\nDia: ");
              scanf ("%i", &c[i].data.dia);

            printf ("\nMes: ");
              scanf ("%i", &c[i].data.mes);
              
            printf ("\nAno: ");
              scanf ("%i", &c[i].data.ano);

        printf ("\nInsira o curso do aluno %s: \n",c[i].nome);
          fflush(stdin);
          gets(c[i].curso);

        printf ("\nInsira a disciplina < UC > do aluno %s: \n",c[i].nome);
          scanf ("%i", &c[i].disciplina);

        printf ("\nInsira o telefone do aluno: \n");
          scanf ("%i", &c[i].tel);

        printf ("\nE por ultimo nos informe A matricula do aluno: \n");
          scanf("%i", &c[i].matricula);

        //pedindo o usuario se deseja continuar cadastrando
        printf ("\nDeseja continuar cadastrando os Alunos? < 1 - SIM > < 0 - NAO >: \n");
          scanf ("%i", &aux);
            
            //caso 0 sair do loop
            if (aux == 0)
            {
                break;
            }

     //incrementando o vetor
     i++;

    }

   //teste de funcionalidade
    printf ("\n%s",c[i].nome);
    printf ("\n%i",c[i].cpf);
    printf ("\n%s",c[i].endereco.cidade);
    printf ("\n%s",c[i].endereco.bairro);
    printf ("\n%s",c[i].endereco.rua);
    printf ("\n%i",c[i].endereco.num);
    printf ("\n%i",c[i].data.dia);
    printf ("\n%i",c[i].data.mes);
    printf ("\n%i",c[i].data.ano);
    printf ("\n%s",c[i].curso);
    printf ("\n%i",c[i].disciplina);
    printf ("\n%i",c[i].tel);
    printf ("\n%i",c[i].matricula);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "estruturas.c"

void Aluno(void)
{
  //definindo vetor da strutura Aluno
  struct Aluno c[2];

  int i = 0, cont = 0, aux = 0, y = 0;
  //c[i].endereco.cidade

  //FILE *file;

  //pegando o input do usuario/aluno
  while (cont == 0)
  {

    printf("\nInsira o nome do %i aluno:\n", i + 1);
    fflush(stdin);
    gets(c[i].nome);

    printf("\nInsira o CPF do aluno %s: \n", c[i].nome);
    scanf("%i", &c[i].cpf);

    printf("\nInsira o endereco do aluno %s", c[i].nome);

    printf("\nCidade: \n");
    fflush(stdin);
    gets(c[i].endereco.cidade);

    printf("\nBairro: \n");
    fflush(stdin);
    gets(c[i].endereco.bairro);

    printf("\nRua: \n");
    fflush(stdin);
    gets(c[i].endereco.rua);

    printf("\nNumero: \n");
    scanf("%i", &c[i].endereco.num);

    printf("\nInsira a data de nascimento do aluno %s", c[i].nome);

    printf("\nDia: ");
    scanf("%i", &c[i].data.dia);

    printf("\nMes: ");
    scanf("%i", &c[i].data.mes);

    printf("\nAno: ");
    scanf("%i", &c[i].data.ano);

    printf("\nInsira o curso do aluno %s: \n", c[i].nome);
    fflush(stdin);
    gets(c[i].curso);

    printf("\nInsira a disciplina < UC > do aluno %s: \n", c[i].nome);
    scanf("%i", &c[i].disciplina);

    printf("\nInsira o telefone do aluno: \n");
    scanf("%i", &c[i].tel);

    printf("\nE por ultimo nos informe A matricula do aluno: \n");
    scanf("%i", &c[i].matricula);

    //pedindo o usuario se deseja continuar cadastrando
    printf("\nDeseja continuar cadastrando os Alunos? < 1 - SIM > < 0 - NAO >: \n");
    scanf("%i", &aux);

    //caso 0 sair do loop
    if (aux == 0)
    {
      break;
    }

    //incrementando o vetor
    i++;
  }
  //atribuindo o tamanho de i para y para colocar na condicao do for
  y = i + 1;

  for (i = 0; i < y; i++)
  {
    //teste de funcionalidade
    printf("\n%s", c[i].nome);
    printf("\n%i", c[i].cpf);
    printf("\n%s", c[i].endereco.cidade);
    printf("\n%s", c[i].endereco.bairro);
    printf("\n%s", c[i].endereco.rua);
    printf("\n%i", c[i].endereco.num);
    printf("\n%i", c[i].data.dia);
    printf("\n%i", c[i].data.mes);
    printf("\n%i", c[i].data.ano);
    printf("\n%s", c[i].curso);
    printf("\n%i", c[i].disciplina);
    printf("\n%i", c[i].tel);
    printf("\n%i", c[i].matricula);
  }
}

//---------------------------------------- cadastro de professor----------------------------------------------------
//---------------------------------------- cadastro de professor----------------------------------------------------

void Professor(void)
{
  int i = 0, cont = 0, aux = 0, y = 0;
  //chamando a estrutura
  struct Professor p[3];

  //pegando o input do usuario/professor
  while (cont == 0)
  {

    printf("\n\n\nInsira o nome do %i Professor:\n", i + 1);
    fflush(stdin);
    gets(p[i].nome);

    printf("\nInsira o CPF do Professor %s: \n", p[i].nome);
    scanf("%i", &p[i].cpf);

    printf("\nInsira o telefone do Professor %s: \n", p[i].nome);
    scanf("%i", &p[i].tel);

    printf("\nInsira o salario do Professor %s: \n", p[i].nome);
    scanf("%f", &p[i].sal);

    printf("\nInsira o ID do professor %s: \n", p[i].nome);
    scanf("%i", &p[i].id);

    printf("\nE por ultimo nos informe a data de nascimento do professor %s", p[i].nome);

    printf("\nDia: ");
    scanf("%i", &p[i].data.dia);

    printf("\nMes: ");
    scanf("%i", &p[i].data.mes);

    printf("\nAno: ");
    scanf("%i", &p[i].data.ano);

    //pedindo o usuario se deseja continuar cadastrando
    printf("\nDeseja continuar cadastrando o Professor? < 1 - SIM > < 0 - NAO >: \n");
    scanf("%i", &aux);

    if (aux == 0)
    {
      break;
    }
    //atribuindo o tamanho de i para y para colocar na condicao do for
    y = i + 1;

    i++;
  }
  //atribuindo o tamanho de i para y para colocar na condicao do for
  y = i + 1;

  for (i = 0; i < y; i++)
  {

    //teste de funcionalidade
    printf("\n%s", p[i].nome);
    printf("\n%i", p[i].cpf);
    printf("\n%i", p[i].data.dia);
    printf("\n%i", p[i].data.mes);
    printf("\n%i", p[i].data.ano);
    printf("\n%i", p[i].tel);
    printf("\n%.2f", p[i].sal);
  }
}
#include <stdio.h>
#include <stdlib.h>

struct Endereco // endereço não recebe variavel isolada
{
    char cidade[200];
    char bairro[200];
    char rua[200];
    int num;
    char complemento[20];
};

struct Data // para data de nascimento, não recebe variavel isolada
{
    int ano;
    int mes;
    int dia;
}; //a variavel não é definida aqui

struct Aluno
{
    char nome[200];
    int cpf;
    struct Endereco endereco; //a estrutura recebe aqui os parametros na hora do dado fica: aluno[i].endereco.rua
    struct Data data;         // o mesmo acontece aqui: aluno[i].data.dia
    char curso[200];
    int disciplina; //le se como UC
    int tel;
    int matricula;
}; // aqui pode entrar o vetor que usa da estrutura: aluno[i]

struct Professor // originalmente as variaveis estavam todas numa linha, formatei pra ficar visivel
{
    char nome[70];
    int cpf;
    int tel;
    float sal;
    int id;
    struct Data data;
}; // aqui pode receber o

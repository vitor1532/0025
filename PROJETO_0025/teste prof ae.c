#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct professor
{
    char nome[70];
    int cpf, tel, sal, id;
};

int main ()
{
    setlocale(LC_CTYPE, "Portuguese");
    struct professor prof[3];
    int i;

    for(i=0;i<3;i++){
        printf("Digite o nome do %do professor: ",i+1);
        scanf(" %[^\n]",&prof[i].nome);

        printf("\n\nDigite o CPF do professor %s: ",prof[i].nome);
        scanf(" %[^\n]",&prof[i].cpf);

        printf("\n\nDigite o seu telefone: ");
        scanf(" %[^\n]",&prof[i].tel);

        printf("\n\nDigite o salário do professor: ");
        scanf(" %[^\n]",&prof[i].sal);

        printf("\n\nDigite o ID do professor %s: ",prof[i].nome);
        scanf(" %[^\n]",&prof[i].id);

        system("cls");
    }

    for(i=0;i<3;i++){
        printf("O nome do professor: %s",prof[i].nome);
        printf("\n\nO CPF do professor: %d",prof[i].cpf);
        printf("\n\nO Telefone do professor: %d",prof[i].tel);
        printf("\n\nO Salário do professor: %d",prof[i].sal);
        printf("\n\nO ID do professor: %d",prof[i].id);

        printf("\n\n\n\n");
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct individuo
{
    int dia, ano;
    char mes[10],nome[50];
};

void main ()
{
    int i,cont, dia, ano;
    char mes[10];
    
    //inserir o numero de pessoas cadastradas
    printf("Digite o numero de cadastros: ");
    scanf("%d",&cont);

    system("cls");

    struct individuo pessoa [cont];

    //inserir a data que ta sendo feito os cadastros
    printf("Digite a data de hoje (dia,mes e ano)\nDIA>> ");
    scanf("%d",&dia);
    printf("\nMES>> ");
    fflush(stdin);
    gets(mes);
    printf("\nANO>> ");
    scanf("%d",&ano);

    system("cls");

    //o cadastro do pessoal
    for(i=0;i<cont;i++){
        printf("Digite o nome da %d pessoa: ",i+1);
        fflush(stdin);
        gets(pessoa[i].nome);

        printf("\nDigite a data de nascimento (dia,mes e ano)\nDIA>> ");
        scanf("%d",&pessoa[i].dia);
        printf("\nMES>> ");
        fflush(stdin);
        gets(pessoa[i].mes);
        printf("\nANO>> ");
        scanf("%d",&pessoa[i].ano);

        system("cls");

    }
        //os dados printados e se o dia e mes bater dá um parabens
        for(i=0;i<cont;i++){
                printf("Nome: %s",pessoa[i].nome);
                printf("\nData de nascimento: %d de %s de %d",pessoa[i].dia,pessoa[i].mes,pessoa[i].ano);
                if((pessoa[i].dia==dia) && (pessoa[i].dia==dia))
                {
                    printf("\nFeliz Aniversario %s e parabens pelos %d anos",pessoa[i].nome,ano-pessoa[i].ano);
                }

                printf("\n\n");
        }
}




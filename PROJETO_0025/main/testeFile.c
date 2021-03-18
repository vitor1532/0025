#include <stdio.h>
#include <stdlib.h>

void main()
{

    int cont = 0, y = 1;
    FILE *file;
    file = fopen("endLog.txt", "w");
    char name[45], city[45], street[45];
    do
    {
        cont++;
        printf("\n-------------------------------------\n           CADASTRO %i\n-------------------------------------\n", cont);
        setbuf(stdin, NULL);
        printf("\nEscreva seu nome: ");
        fgets(name, 45, stdin);
        setbuf(stdin, NULL);
        printf("\nInsira sua cidade: ");
        fgets(city, 45, stdin);
        setbuf(stdin, NULL);
        printf("\nInsira sua rua: ");
        fgets(street, 45, stdin);
        setbuf(stdin, NULL);
        printf("\nDeseja continuar os cadastros ? [1]SIM [2]NAO:\n");
        scanf("%i", &y);
        fprintf(file, "-------------------------------------\n             CADASTRO %i\n-------------------------------------\n", cont);
        fprintf(file, "Nome: %s", name);
        fprintf(file, "Cidade: %s", city);
        fprintf(file, "Rua: %s", street);
        fputs("\n", file);

        if (y == 2)
        {
            fclose(file);
        }
    } while (y != 2);
    return 0;
}
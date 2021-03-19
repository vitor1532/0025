#include <stdio.h>
#include <stdlib.h> 
#define MAXCHAR 1000
int main() 
{
    
    FILE *fp;
    char str[MAXCHAR];
  
    fp = fopen("texte.txt","r");

    if (fp == NULL){
        printf("Could not open file");
        system ("pause");
        system ("exit");
    }
    
    fscanf(fp,"%[^\n]s",str);
    printf("%s",str);
    fclose(fp);

return 0;
}
    


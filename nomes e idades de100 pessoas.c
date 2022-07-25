#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char nome[20];
    FILE *arq;
    int i;
    arq=fopen("C:\\Users\\Aula\\Desktop\\pessoas.txt","w");
    for(i=0;i<10;i++){
        printf("digite nomes e idades de cada pessoas.\n");
        fflush(stdin);
        scanf("%s %d",nome,&idade);
        fprintf(arq,"%s %d",nome,idade);
    }

    fclose(arq);
    return 0;
}

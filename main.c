#include <stdio.h>
#include <stdlib.h>
int main()
{
   FILE *nome;
   int i,n[20],a;
   nome=fopen("C:\\Users\\Aula\\Desktop\\nome.txt","w");
   printf("Digite 100 nome e idade: \n");
   //fscanf("%s %d",&n, &a);
   fclose(nome);
    return 0;
}

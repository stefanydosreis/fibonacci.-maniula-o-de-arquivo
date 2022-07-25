#include <stdio.h>
#include <stdlib.h>
int  fib (int n){
    int f=1;
    if(n>2)f=fib(n-1)+fib(n-2);
    return f;
}

int main()
{
    FILE *arq;
    int i;
    arq=fopen("C:\\Users\\Aula\\Desktop\\fibonacci.txt","w");
    for(i=0;i<20;i++){
        fprintf(arq,"%d\n",fib(i+1));
    }
    fclose(arq);
    return 0;
}

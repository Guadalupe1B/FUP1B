#include<stdio.h>//libreria de E/S
/*
*/
int numero;
int i;
int j;
int main()
{//inicio
printf("Dame un numero:");
scanf("%d",&numero);
for(i=1; i<=numero; i++)
{
	for(j=1; j<=i; j++)
	{
		printf("%d",i);
    }
    printf("\n");
}
}//fin

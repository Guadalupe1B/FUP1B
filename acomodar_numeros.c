#include<stdio.h>//libreria de E/S
/*
*/
int numero[10];
int i=0;
int a;
int main()
{//inicio
for(i=0; i<10; i++)
{
	printf("Dame los numeros:");
	scanf("%d",&numero[i]);
}
for(a=9; a>-1; a--)
{
	printf("%d\n",numero[a]);
}
}//fin

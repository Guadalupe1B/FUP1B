#include<stdio.h>//libreria de E/S
/*
*/
int i=1;
int N;
int resultado;
int main()
{//inicio
printf("Dame un numero natural:");
scanf("%d",&N);
while(i<=10)
{
	printf("%d\n",i);
	resultado=resultado+i;
	i++;
	printf("La suma es:%d\n",resultado);
}
}//fin

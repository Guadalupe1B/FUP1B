#include<stdio.h>//libreria de E/S
/*
*/
int numero;
int resultado;
int res;
int main()
{//inicio
printf("Dame un numero:");
scanf("%d",&numero);
res=numero%2;
if(res==0)
{
	printf("Es par");
}
else
{
	printf("Es impar");
}
}//fin

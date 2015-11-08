#include<stdio.h>//libreria de E/S
/*
*/
int numero;
int res;
int main()
{//inicio
printf("Programa que descompone un numero\n");
printf("Dame un numero:");
scanf("%d",&numero);
while(numero!=0)
{
	res=numero%10;
	printf("Digito: %d\n",res);
	numero=numero/10;
}
}//fin

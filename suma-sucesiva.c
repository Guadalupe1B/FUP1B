#include<stdio.h>//libreria de E/S
/*
*/
int num1;
int num2;
int i;
int suma;
int main()
{//inicio
printf("Programa de suma sucesiva\n");
printf("Dame un numero:");
scanf("%d",&num1);
printf("Dame otro numero:");
scanf("%d",&num2);
for(i=1; i<=num2; i++)
{
	suma=0;
	suma=suma+num1;
}
printf("El total es:%d",suma);
}//fin

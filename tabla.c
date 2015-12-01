#include<stdio.h>//libreria de E/S
/*
*/
int b[10];
int j=1;
int a;
int main()
{//inicio
printf("Programa que multiplica cada elemento A por todos los elementos B\n");
printf("Dame el numero A:");
scanf("%d",&a);
while(a<=10)
{
	for(j=1; j<=10; j++)
	{
		b[j]=a*j;
		printf("%dx%d=%d",a,j,b[j]);
        printf("\n");
	}
	break;
}
}//fin


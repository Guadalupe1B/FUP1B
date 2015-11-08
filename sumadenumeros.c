#include<stdio.h>//libreria de E/S
/*
*/
i=1;
a=0;
int final;
int main()
{//inicio
printf("Suma de numeros:");
scanf("%d",&final);
while(i<=final)
{
	a=a+i;
	i=i+1;
}
printf("%d",a);
}//fin

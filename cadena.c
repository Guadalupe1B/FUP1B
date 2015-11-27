#include<stdio.h>//libreria de E/S
/*
*/
char cadena[50];
char buscar;
char remplazar;
char i;
int main()
{//inicio
scanf("%s",cadena);
scanf(" %c",&buscar);
scanf(" %c",&remplazar);
for(i=0; i<50; i++)
{
	if(cadena[i]==buscar)
	{
		cadena[i]=remplazar;
	}
}
printf("%s",cadena);
}//fin

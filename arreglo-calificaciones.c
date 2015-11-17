# FUP1B
#include<stdio.h>//libreria de E/S
/*
*/
int suma;
int i;
int promedio;
int calificacion[10];
int main()
{//inicio
printf("Programa que saca promedios\n");
for(i=0; i<10; i++)
{
	printf("Dame la calificacion:");
	scanf("%d",&calificacion[i]);
	printf("\nLa calificacion es:%d\n", calificacion[i]);
    suma+=calificacion[i];
}
promedio=suma/10;
printf("El promedio es:%d",promedio);
}//fin

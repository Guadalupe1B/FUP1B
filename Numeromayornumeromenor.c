#include<stdio.h>//libreria de E/S
/*
*/
int num1;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
int num8;
int num9;
int num10;
int mayor=-999;
int menor=9999999;
int main()
{//inicio
printf("Introduzca numero 1:");
    scanf("%d",&num1);
    if (num1>mayor)
    {
       mayor=num1;
    }
	if (num1<menor)
    {
        menor=num1;
    }
    printf("Introduzca numero 2:");
    scanf("%d",&num2);
    if (num2>mayor)
    {
       mayor=num2;
    }
    if (num2<menor)
    {
        menor=num2;
    }
    printf("Introduzca numero 3:");
    scanf("%d",&num3);
    if (num3>mayor)
    {
       mayor=num3;
    }
    if (num3<menor)
    {
        menor=num3;
    }
    printf("Introduzca numero 4:");
    scanf("%d",&num4);
    if (num4>mayor)
    {
       mayor=num4;
    }
	if (num4<menor)
    {
       menor=num4;
    }
    printf("Introduzca numero 5:");
    scanf("%d",&num5);
    if (num5>mayor)
    {
       mayor=num5;
    }
    if (num5<menor)
    {
        menor=num5;
    }
    printf("Introduzca numero 6:");
    scanf("%d",&num6);
    if (num6>mayor)
    {
       mayor=num6;
    }
	if (num6<menor)
    {
        menor=num6;
    }
    printf("Introduzca numero 7:");
    scanf("%d",&num7);
    if (num7>mayor)
    {
       mayor=num7;
    }
	if (num7<menor)
    {
        menor=num7;
    }
    
    printf("Introduzca numero 8:");
    scanf("%d",&num8);
    if (num8>mayor)
    {
       mayor=num8;
    }
	if (num8<menor)
    {
        menor=num8;
    }
    printf("Introduzca numero 9:");
    scanf("%d",&num9);
    if (num9>mayor)
    {
       mayor=num9;
    }
	if (num9<menor)
    {
        menor=num9;
    }
    printf("Introduzca numero 10:");
    scanf("%d",&num10);
    if (num10>mayor)
    {
       mayor=num10;
    }
	if (num10<menor)
    {
        menor=num10;
    }
    printf("El mayor es:%d\n", mayor);
    printf("El menor es:%d\n", menor);
}//fin

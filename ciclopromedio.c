#include<stdio.h>//libreria de E/S
/*
*/
float a;
float b;
float c;
float d;
float e;
float f;
float g;
float h;
float i;
float j;
float resultado1;
float resultado2;
char afirmacion;
int main()
{//inicio
do{
	afirmacion='s';
	printf("Dame un numero:");
	scanf("%f",&a);
	printf("Dame otro numero:");
	scanf("%f",&b);
	printf("Dame otro numero:");
	scanf("%f",&c);
	printf("Dame otro numero:");
	scanf("%f",&d);
	printf("Dame otro numero:");
	scanf("%f",&e);
	printf("Dame otro numero:");
	scanf("%f",&f);
	printf("Dame otro numero:");
	scanf("%f",&g);
	printf("Dame otro numero:");
	scanf("%f",&h);
	printf("Dame otro numero:");
	scanf("%f",&i);
	printf("Dame otro numero:");
	scanf("%f",&j);
resultado1=a+b+c+d+e+f+g+h+i+j;
resultado2=resultado1/10;
printf("El promedio es:%f",resultado2);
printf("\nDeseas continuar:s(si)/n(no):");
fflush(stdin);
scanf("%c",&afirmacion);
}while(afirmacion=='s');
}//fin

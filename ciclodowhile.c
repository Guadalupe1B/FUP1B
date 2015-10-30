#include<stdio.h>//libreria de E/S
/*
*/
int resultado;
int N1;
int N2;
char confirmacion;
int main()
{//inicio
confirmacion='s';
do
{
printf("Dame un numero:");
 scanf("%d",&N1);
 printf("Dame otro numero:");
 scanf("%d",&N2);
 resultado=N1+N2;
 printf("El resultado es: %d\n", resultado);
 resultado=N1-N2;
 printf("Si se resta es: %d\n", resultado);
 resultado=N1*N2;
 printf("Si se multiplica es: %d\n", resultado);
 resultado=N1/N2;
 printf("Si se divide es: %d\n", resultado);
printf("Deseas continuar:s(si)/n(no):");
fflush(stdin);
scanf("%c",&confirmacion);
}while(confirmacion=='s');

}//fin

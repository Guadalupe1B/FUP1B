#include<stdio.h>//Libreria de E/S
/*
Programa que suma dos numeros
*/
 int resultado;
 int N1;
 int N2;
 int main()
{//inicio
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
}//fin

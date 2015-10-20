#include<stdio.h>//libreria de E/S
/*
Programa que calcula la
propina
*/
float resultado1;
float resultado2;
float resultado3;
float N1;
float N2;
int main ()
{//inicio
 printf("Dame el total de la cuenta:");
 scanf("%f", &N1);
 printf("Dame el numero de personas:");
 scanf("%f", &N2);
 resultado1=N1*.10;
 printf("Total en propinas: %f\n", resultado1);
 resultado2=resultado1+N1;
 printf("Total a pagar: %f\n", resultado2);
 resultado3=resultado2/N2;
 printf("Total a pagar por persona: %f\n", resultado3);
}//fin

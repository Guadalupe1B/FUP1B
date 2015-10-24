#include<stdio.h>//Libreria de E/S
/*
Programa que convierte de MB 
a bit, byte, KB, GB y TB
*/
float resultado;
float N;
int main()
{//inicio
 printf("Dame los MB:");
 scanf("%f", &N);
 resultado=N*1024*1024*8;
 printf("En bit es: %f \n", resultado);
 resultado=N*1024*1024;
 printf("En byte es: %f \n", resultado);
 resultado=N*1024;
 printf("En KB es: %f \n", resultado);
 resultado=N/1024;
 printf("En GB es: %f \n", resultado);
 resultado=N/1024/1024;
 printf("En TB es: %f \n", resultado);
}//fin

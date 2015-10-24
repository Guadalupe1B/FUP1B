#include<stdio.h>//libreria de E/S
/*
Programa para calificaciones
*/
int calificacion;
int main()
{//inicio 
 printf("Dame la calificacion:");
 scanf("%d" , &calificacion);
 if(calificacion>=7)
 {
 	printf("aprobado");
 }
 else
 {
 	printf("reprobado");                                                                  
 }
}//fin

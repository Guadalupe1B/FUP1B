#include<stdio.h>//libreria de E/S
/*
*/
int edad;
int main()
{//inicio
 printf("Dame tu edad: ");
 scanf("%d", &edad);
 if(edad>=0 && edad<=12)
 {
 	printf("Eres nino");
 }
 else
 {
 	if(edad>=13 && edad<=18)
 	{
 		printf("Eres adolescente");
	 }
	else
	{
		if(edad>=19 && edad<=29)
		{
			printf("Eres joven");
		}
		else
		{
			if(edad>=30 && edad<=59)
			{
				printf("Eres adulto");
			}
			else
			{
				if(edad>60)
				printf("Eres adulto mayor");
			}
		}
	}
 }
}

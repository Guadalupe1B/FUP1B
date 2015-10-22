#include<stdio.h>//libreria de E/S
/*
*/
int kilo;
int ciclo;
int main()
{//inicio
 printf("Lavadora Easy\n");
 printf("Dame los kilos a lavar:");
 scanf("%d",&kilo);
 if(kilo>=0&&kilo<=20){
  if(kilo>=0&&kilo<=10){
 	printf("Nivel de agua: Minimo");
    }
    else
    {
 	if(kilo>=11&&kilo<=15){
 		printf("Nivel de agua: Medio");
	 }
	else{
		if(kilo>=16&&kilo<=19){
			printf("Nivel de agua: Alto");
		}
		else{
			if(kilo=20){
				printf("Nivel de agua: Extra");
			}
		}
	}
    }
	printf("\nDame el ciclo de lavado:\n");
    printf("Delicado(1), Normal(2) y Sucia(3)");
    scanf("%d",&ciclo);
    switch(ciclo)
    {
	case 1:{
		printf("Tiempo de lavado: 5min.");
		break;
	}
	case 2:{
		printf("Tiempo de lavado: 10min.");
		break;
	}
	case 3:{
		printf("Tiempo de lavado: 20 min.");
		break;
	}
	default:{
		printf("No exite");
		break;
    }
    }
}
else{
	printf("No se puede lavar esa cantidad de ropa");
}
}//fin

#include<stdio.h>//libreria de E/S
/*
*/
int N;
int cantidad;
int resultado;
int main()
{//inicio
printf("Estos son los produntos:\n 1-Papas\n 2-Refresco\n 3-Jugo\n 4-Chocolate\n 5-Leche\n 6-Azucar\n 7-Cereal\n 8-Veladora\n 9-Maruchan\n 10-Aceite\n");
printf("Dame el numero del producto a comprar:");
scanf("%d",&N);
switch(N)
{
	case 1:{
		printf("Papas $8\n ¿Cuanto quieres?");
		scanf("%d",&N);
		resultado=N*8;
		printf("El total es:%d",resultado);
		break;
	}
	case 2:{
		printf("Refresco $10\n ¿Cuanto quieres?");
		scanf("%d",&N);
		resultado=N*10;
		printf("El total es:%d",resultado);
		break;
	}
	case 3:{
		printf("Jugo $9\n ¿Cuanto quieres?");
		scanf("%d",&N);
		resultado=N*9;
		printf("El total es:%d",resultado);
		break;
	}
	case 4:{
		printf("Chocolate $5\n ¿Cuanto quieres?");
		scanf("%d",&N);
		resultado=N*5;
		printf("El total es:%d",resultado);
		break;
	}
	case 5:{
		printf("Leche $13\n ¿Cuanto quieres?");
		scanf("%d",&N);
		resultado=N*13;
		printf("El total es:%d",resultado);
		break;
	}
	case 6:{
		printf("Azucar $14\n ¿Cuanto quieres?");
		scanf("%d",&N);
		resultado=N*14;
		printf("El total es:%d",resultado);
		break;
	}
	case 7:{
		printf("Cereal $18\n ¿Cuantos quieres?");
		scanf("%d",&N);
		resultado=N*18;
		printf("El total es:%d",resultado);
		break;
	}
	case 8:{
		printf("Veladora $12\n ¿Cuantos quieres?");
		scanf("%d",&N);
		resultado=N*12;
		printf("El total es:%d",resultado);
		break;
	}
	case 9:{
		printf("Maruchan $7\n ¿Cuantos quieres?");
		scanf("%d",&N);
		resultado=N*7;
		printf("El total es:%d",resultado);
		break;
	}
	case 10:{
		printf("Aceite $18\n ¿Cuantos quieres?");
		scanf("%d",&N);
		resultado=N*18;
		printf("El total es:%d",resultado);
		break;
	}
	default:{
		printf("No existe este producto");
		break;
	}
}
}//fin

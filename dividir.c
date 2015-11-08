#include<stdio.h>//libreria de E/S
/*
*/
int numero;
int res;
int main()
{//inicio
printf("Programa que descompone un numero\n");
do{
printf("Dame un numero de 4 digitos:");
scanf("%d",&numero);
}while(numero<1000||numero>9999);
res=numero%10;
printf("Unidades:%d\n",res);
numero=numero/10;
res=numero%10;
printf("Decenas:%d\n",res);
numero=numero/10;
res=numero%10;
printf("Centenas:%d\n",res);
numero=numero/10;
res=numero%10;
printf("Millares:%d\n",res);
numero=numero/10;
res=numero%10;
}//fin

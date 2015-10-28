#include<stdio.h>//libreria de E/S
/*
*/
int N;
int n;
int i=0;
int resultado=0;
int main()
{//inicio
printf("Dame el numero a sumar:");
scanf("%d",&N);
printf("Dame las veces a sumar:");
scanf("%d",&n);
while(i<n){
	resultado=resultado+N;
	i++;
}
printf("%d",resultado);
}//fin

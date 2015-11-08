#include<stdio.h>//libreria de E/S
/*
*/
int N1;
int popo;
int i;
int main()
{//inicio
printf("Dame un numero:");
scanf("%d",&N1);
popo=1;
while(popo<=N1)
{
	i=1;
	while(i<=popo)
	{
		printf("%d", popo);
		i++;
	}
	printf("\n");
	popo++;
}
system("pause");
}//fin

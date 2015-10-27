#include<stdio.h>//libreria de E/S
/*
*/
int a;
int b;
int c;
int main()
{//inicio
printf("Dame un numero:\n");
scanf("%d",&a);
printf("Dame otro numero:\n");
scanf("%d",&b);
printf("Dame otro numero:\n");
scanf("%d",&c);
if(a>b && a>c)
{
	if(a>b)
	{
		printf("%d\n",a);
		printf("%d\n",b);
		printf("%d\n",c);
	}
	else
	{
		printf("%d\n",a);
		printf("%d\n",c);
		printf("%d\n",b);
	}
}
else(b>a && b>c);
{
	if(a>c)
	{
		printf("%d\n",b);
		printf("%d\n",a);
		printf("%d\n",c);
	}
	else
	{
		printf("%d\n",b);
		printf("%d\n",c);
		printf("%d\n",a);
	}
}
if(c>a && c>b)
{
	if(b>c)
	{
		printf("%d\n",c);
		printf("%d\n",a);
		printf("%d\n",b);
	}
	else
	{
		printf("%d\n",c);
		printf("%d\n",b);
		printf("%d\n",a);
	}
}
}//fin

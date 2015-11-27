#include<stdio.h>//libreria de E/S
/*
*/
char cadena1[50];
char cadena2[50];
char i;
char j;
int main()
{//inicio
printf("Dame la palabra:");
scanf("%s",cadena1);
printf("Dame la otra palabra:");
scanf("%s",cadena2);
while(cadena1[i]!='\0')
{
	
    while(cadena1[i]==cadena2[j])
	{
	    i++;
	    j++;
	    if(cadena2[j]=='\0')
	    {
	    	printf("Existe");
	    	break;
		}
		if(cadena2[j]!=cadena1[i])
		{
		    printf("No existe");
		    break;
		}
	}
	i++;
	j=0;
}

}//fin

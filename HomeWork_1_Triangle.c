#include<stdio.h>

int main()
{
	float a,b,c;
	
	printf("Enter the sides of triangle:\n");
	printf("A:\n");
	scanf("%f",&a);
	printf("B:\n");
	scanf("%f",&b);
	printf("C:\n");
	scanf("%f",&c);
	
	if((a+b)>c && (b+c)>a && (a+c)>b)
	{
		printf("Triangle can be made");
	}
	else
	{
		printf("Inposible to make");
	}
}

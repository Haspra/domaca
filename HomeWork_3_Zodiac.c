#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	
	printf("Enter the sides of triangle\n(Enter the values in mm):");
	printf("A: ");
	scanf("%d",&a);
	printf("B: ");
	scanf("%d",&b);
	printf("C: ");
	scanf("%d",&c);
	
//	printf("%f %f %f",a,b,c);
	
	if((a+b)>c && (b+c)>a && (a+c)>b)
	{
		printf("Triangle can be made\n");
		
		if(c==sqrt((a*a)+(b*b)) || a==sqrt((c*c)+(b*b)) || b==sqrt((a*a)+(c*c)))
		{
			printf("Triangle is right-angeled\n");
			
		}
		else
		printf("Triangle is NOT right- angeled\n");
//		printf("%f %f %f",a,b,c);
	}
	else
	{
		printf("Inposible to make\n");
	}
}

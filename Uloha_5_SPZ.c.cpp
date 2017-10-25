#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() 
{
	srand(time(NULL));
   	int letter, type;
   	int i, j, okres;
   	char password[9];
  	printf("Enter the zone :\n(ONLY numbers 1-8)\n");
  	
  	printf("1. Bratislavsky:\n");
  	printf("2. Trnavsky:\n");
  	printf("3. Trenciansky:\n");
  	printf("4. Nitriansky:\n");
  	printf("5. Zilinsky:\n");
  	printf("6. Banskobystricky:\n");
  	printf("7. Presovsky:\n");
  	printf("8. Kraj najlepsi:\n");
  	
  	scanf("%d",&okres);
  	 	  	   	
  	switch(okres)
   		{
   			case 1: password[0]='B';
					password[1]='A'; break;
   			case 2: password[0]='T';
					password[1]='T'; break;
   			case 3: password[0]='T';
					password[1]='N'; break;
   			case 4: password[0]='N';
					password[1]='R'; break;
   			case 5: password[0]='Z';
					password[1]='I'; break;
   			case 6: password[0]='B';
					password[1]='B'; break;
   			case 7: password[0]='P';
					password[1]='O'; break;
   			case 8: password[0]='K';
					password[1]='E'; break;
   			default: printf ("READ THE INSTRUCTIONS");
		}

   	password[2]='-';
	for(i=3;i<6;i++)
   	{
   		password[i]=rand()%10+48;
   	}
   	
   	for(i=6;i<8;i++)
   	{
   		password[i]=rand()%26+65;
	}
   	password[8]='\0';
   	printf("%s",password);
}

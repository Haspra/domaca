#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20

int main()
{
   int arr[N],rra[N],i,a,b,c,d,even,odd,two=0,three=0,four=0,seven=0,max=0,min=0; // even parne, od- neparne, one- jednocif, two- dvojcif
   srand(time(NULL));
   
   for(i=0;i<N;i++)
   {
   	arr[i]=rand()%9990+10;
   	rra[(N-1)-i]=arr[i];
   	
   	if(arr[i]%2==0)
   		{
   		even++;
	   	}
	else
	{
		odd++;
	}
	
	if(arr[i]>9 && arr[i]<=99)
	{
		two++;
	}
	else if(arr[i]>99 && arr[i]<=999)
	{
		three++;
	}
	else
	{
		four++;
	}

   }
  	min=arr[0];
   	max=arr[0];
   	printf("Array from the front: ");
   for(i=0;i<N;i++)
   {
   	   	
   	if(arr[i]>max)
		{
		max=arr[i];
		}   	
        
    if(arr[i]<min)
    	{
    	min=arr[i];	
		}
	if(arr[i]%7==0)
		{
			seven++;
		}
   	printf("%d ", arr[i]);
     		
   	}
   	printf("\n");
   	printf("Array from the back: ");
   	for(i=0;i<N;i++)
   	{
   		printf("%d ", rra[i]);
	}
	 
	 
	 printf("\nAmount(s) of even number(s): %d \nNumber(s) of odd number(s): %d\n", even-1,odd);
	 printf("Amount(s) of 2-digit numbers is %d\n", two);
	 printf("Amount(s) of 3-digit numbers is %d\n", three);
	 printf("Amount(s) of 4-digit numbers is %d\n", four);
  	 printf("The biggest number is  %d\n", max);
	 printf("The smallest number is  %d\n", min);  
	 
	for(i=0;i<N;i++)
	{
	 	if((arr[i]>9) && (arr[i]<100))
		{
		a=arr[i]%10;
		c=arr[i]/10;
			if(a==c)
			{
			printf("Palindrome of 2-digit numbers is: %d\n",arr[i]);
			
			}
		}
		else if (arr[i]>99 && arr[i]<=999)
		{
		a=arr[i]%10;
		c=arr[i]/100;
			if(a==c)
			{
			printf("Palindrome of 3-digit numbers is: %d\n",arr[i]);
			
			}
		}
		else
		{
		a=arr[i]%10;
		b=(arr[i]%10)/10;
		d=(arr[i]%10)/100;
		c=arr[i]/1000;
			if(a==c && b==d)	
			{
			printf("Palindrome of 4-digit numbers is: %d\n",arr[i]);
			}
		}
	 }
	 printf("Amount of numbers devided by seven is  %d\n", seven);  
	 
	 
}

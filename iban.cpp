/* name: Jan Stec
   work: Homework
   name of work: IBAN
   date: 14.11.
   time: 22:32
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
	int val;
   	char IBAN[26],IBANF;
   	char bankcode[4];
   	char bankacc[10];
   	char prefix[6];
   	char controlnum[2];
   	
   	printf("Can i get your bank code? (4 digits):"); // type bank code
   	
   	scanf("%s",bankcode);
   	
   	printf("\nPlease Type your bank account number (4-10 digits):");
   	
   	scanf("%s",bankacc);
   	
   	printf("\nPlease enter your bank account preffix (if you dont have any type 000000):");
   	
   	scanf("%s",prefix);
   	
   	strcpy(IBAN, bankcode); // bank code
   	
 	strcat(IBAN, prefix); // prefix
 	
  	strcat(IBAN, bankacc); //bank acc
  	
  	strcat(IBAN, "282000"); // IBAN
  	
  	printf("Your IBAN is: %s",IBAN);
  	
  	int len=(int)strlen(IBAN),x,i,z,y;
  
  	printf("\nYour iban lenght is: %d",len);
  	
  	for(i=0;i<len;i++)
  	{
  		y=0;
  		
  		y=(IBAN[i]-48);
  		
  		x=((x*10)+y)%97;	
	}
	x=98-x;
	
	itoa(x,controlnum,10);
	
	printf("\nYour Control number is: %s",controlnum);
	
	printf("\nIBAN: SK %s %s %s %s ",controlnum,bankcode,prefix,bankacc);
	
}

/*
*Name: Ján Stec
*Name of work: working with files
*Date: 12-05-2017
*Time: 11:41
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int a;
	int b;
}rect;

int main() 
{
  rect rects[4];
  FILE *fr;
  FILE *fw;
  fr = fopen("cisla.txt", "r");
  fw = fopen("cisla2.txt", "w");
  
  if(fr==NULL)
	{
		printf("File error");
		return 1;
	}
	else
	{
		if(fw==NULL)
		{
			fclose(fr);
			printf("File error");
			return 1;
		}
	else{}
	}
   
   int i=0,s,o;
   char x,c;
   while(fscanf(fr,"%d%c%d%c",&rects[i].a,&x,&rects[i].b,&c) != EOF)
   {
		i++;
   }
   
   fclose(fr);
   for(i=0;i<4;i++)
   {
   	s=0;
   	s=((int)rects[i].a)*((int)rects[i].b);
   	o=2*(rects[i].a+rects[i].b);
   	fprintf(fw,"a= %d, b=%d, s=%d, o=%d",rects[i].a,rects[i].b,s,o);
   }
   fclose(fw);
}

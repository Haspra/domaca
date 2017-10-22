#include<stdio.h>

int main()
{
	int day,m;
	do
	{
	
	printf("Enter the month\n(there are ONLY 12 months): ");
	scanf("%d",&m);
	
	printf("Enter the day\n(there are MAX 31 days): ");
	scanf("%d",&day);

	}while(day>31 || m<12);


switch (m)
    {
        case 1: // January
            if(day >= 20 && day <= 31)
            {
                printf("Aquarius ");
            }
            else if (day>=1 && day<=19)
            {
                printf("Capricorn ");
            }
            else
            {
                printf("Invalid DATE");
            }
            break;
             
             
        case 2: //February
        
			if (day>=19 && day<=29)
        	{
          		printf("Pisces ");
        	}
            else if (day>=1 && day<=18)
            {
                printf("Aquarius  ");
            }
            else
            {
               	printf("Invalid DATE");
            }
            break;
             
             
             
        case 3: //March
    		if (day>=21 && day<=31)
        	{
            	printf("Aries ");
       		}
        	else if (day>=1 && day<=20)
        	{
            	printf("Pisces ");
        	}
        	else
        	{
            	printf("Invalid DATE");
        	}
        break;
             
             
        case 4: //April
        	if (day>=20 && day<=30)
        	{
           		printf("Taurus ");
       		}
        	else if(day>=1 && day <= 19)
        	{
            	printf("Aries ");
        	}
        	else
        	{
            	printf("Invalid DATE");
        	}
            break;
             
             
        case 5: //May
        
            if (day>=1 && day<=20)
            {
                printf("Taurus ");
            }
            else if(day>=21 && day<=31)
            {
                printf("Gemini ");
            }
            else
            {
                printf("Invalid DATE");
            }
            break;
             
        case 6: //June
        
            if (day>=1 && day <=20)
            {
                printf("Gemini  ");
            }
            else if(day>=21 && day <=30)
            {
                printf("Cancer  ");
            }
            else
            {
                printf("Invalid DATE");
            }
            break;
        
		case 7: //July
        
            if (day>=1 && day <=22)
            {
                printf("Cancer  ");
            }
            else if(day>=23 && day <=31)
            {
                printf("Leo   ");
            }
            else
            {
                printf("Invalid DATE");
            }
            break;
			
		case 8: //August
        
            if (day>=1 && day <=22)
            {
                printf("Leo  ");
            }
            else if(day>=23 && day <=31)
            {
                printf("Virgo  ");
            }
            else
            {
                printf("Invalid DATE");
            }
            break;
		
		case 9: //September
        
            if (day>=1 && day <=22)
            {
                printf("Virgo  ");
            }
            else if(day>=1 && day <=30)
            {
                printf("Libra ");
            }
            else
            {
                printf("Invalid DATE");
            }
            break;
		
		case 10: //October
        
            if (day>=1 && day <=22)
            {
                printf("Libra  ");
            }
            else if(day>=23 && day <=31)
            {
                printf("Scorpio ");
            }
            else
            {
                printf("Invalid DATE");
            }
            break;
		
		case 11: //November
        
            if (day>=1 && day <=21)
            {
                printf("Scorpio ");
            }
            else if(day>=22 && day <=30)
            {
                printf("Sagittarius ");
            }
            else
            {
                printf("Invalid DATE");
            }
            break;
	
		case 12: //December
        
            if (day>=1 && day <=22)
            {
                printf("Sagittarius   ");
            }
            else if(day>=23 && day <=31)
            {
                printf("Capricorn  ");
            }
            else
            {
                printf("Invalid DATE");
            }
            break;
	}
}

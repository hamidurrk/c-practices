#include<stdio.h>

#include<conio.h>


void main()

{
	
float w, h, a, b;  			//weight, height, age, bmr
	
char o; 
	
	
printf ("\nEnter your gender [M/F]: ");
	
o = getche();
	
	

while ( o == 'm' || o == 'M' || o == 'f' || o == 'F' )
	
{
	
printf("\nPlease Enter Your Weight in kilograms:  ");
    
scanf("%f",&w);
    
printf("\nPlease Enter Your Hight in centimeters:  ");
    
scanf("%f",&h);
    
printf("\nPlease Enter Your Age in numbers:  ");
    
scanf("%f",&a);
	
	

if ( o == 'm' || o == 'M')
	
	{ 
		
b = (66 + (13.7*w) + (5*h) - (6.8*a));
		
printf (" \nYour BMR is %3.2f \n", b);
	
	}
	

else if (o == 'f' || o == 'F')
	
	{
		
b = (655 + (9.6*w) + (1.8*h) - (4.7*a));
		
printf (" \nYour BMR is %3.2f \n", b);
	
	}
	
else 
	
	{ 
	
printf ("\nSomething is wrong\nPlease check the informations again. :)");
	
	}
	
};

printf ("\nYou've entered wrong information");

return 0;

}
#include<stdio.h>
int main()
{  
    int choice=0;
	printf("CHOOSE YOUR ORDER NUMBER :\n 1.CHEESE PIZZA - 210 Rupees\n 2.CHICKEN BURGER - 180 Rupees\n 3.SHAWARMA - 160 Rupees\n 4.CHICKEN NOODLES - 150 Rupees\n 5.CHICKEN BARBEQUE - 250 Rupees");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("HERE'S WHAT YOU HAVE ORDERED : CHEESE PIZZA\n IT COSTS: 210 RUPEES");
			break;
			
		case 2:
			printf("HERE'S WHAT YOU HAVE ORDERED : CHICKEN BURGER\n IT COSTS: 180 RUPEES");
			break;
		
		case 3:
		    printf("HERE'S WHAT YOU HAVE ORDERED : SHAWARMA\n IT COSTS: 160 RUPEES");
		    break;
		    
		case 4:
			printf("HERE'S WHAT YOU HAVE ORDERED : CHICKEN NOODLES\n IT COSTS : 150 RUPEES");
			break;
			
	    case 5:
	    	printf("HERE'S WHAT YOU HAVE ORDERED : CHICKEN BARBEQUE\n IT COSTS : 250 RUPEES");
	    	break;
	    	
	    default :
	    	printf("OOPS!THE FOOD YOU HAVE ORDERED IS CURRENTLY NOT AVAILABLE PLEASE TRY ANOTHER DISH");
    }
     
     return 0;
}

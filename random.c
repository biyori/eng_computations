/**
* New template Version 2.0
* Copyright (C) 2010 Kyle Andrews <KyleAndrews@whccd.net>
* Date: 9-30-2010
*/

/*includes*/
#include <stdio.h>
#include <stdlib.h>/*for rand() function*/
/*defines*/

int main()
{
    //Variables
    int times,c=0,heads=0,tails=0,number;
    printf("You are flipping a coin.\n\n");
    printf("How many times do you want to flip the coin?: ");
    scanf("%i",&times);
    
    for (c=0;c<times;c++) 
    {
    	rand_int(0,1);
    	number=rand_int();
    //	printf("%i",number);
    	if(number == 0) {
	    	 tails = tails +1;
	    	 printf("T");
    	} else {
	    	 heads = heads +1;
	    	 printf("H");
    		}
    }
    	printf("\nOut of %i flips, %i of those were heads, and %i were tails.",times,heads,tails);
    
	return 0; //Return process complete.
}
int rand_int(int a, int b)
{
	return rand()%(b-a+1) + a;
}


/**
* 10x10
* Copyright (C) 2010 Kyle Andrews <KyleAndrews@whccd.net>
* Date: 12-14-2010
*/

/*Include libraries*/
#include <stdio.h> //standard input/output (printf function)

int main(void) {
char dot;
int a,b;

printf("Enter a char: "); 
	dot=getchar(); //get char to display
	
	for (a=0; a<9; a++) { //double for loop to get rows
         	for (b=0; b<9; b++) {//for loop for rows reaching 10
         		printf(" "); //make a space or 1x1 square
         	}
         	printf("\n");//make new row
         	for (b=0; b<9; b++) {//column
         		printf(" "); //make a space or 1x1 square
         	}
        } //finish double for loop and end at 10x10 quota
	printf("%c",dot);//print char at 10x10
return 0;
}

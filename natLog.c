/**
* @Author: Kyle Andrews
* @Date: September 28, 2010
* @Description: Table of natural logarithms 1-10.
*/

#include <stdio.h>
#include <math.h> //Include the math library.
main()
{
float i=0,LN,X=1; //Float variables for increased accuracy
printf("Input			Output\n"); //Headers of table
do //Start of the loop
{
LN=log(X);
printf("%f		%f\n",X,LN);
X++;
}
while (X<=10); //Stop when this condition is satisfied.


//getchar(); //using getchar as a method of "pause" to keep terminal open.(Windows only.)
return 0; //Return process complete.
}

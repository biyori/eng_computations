/**
* @Author: Kyle Andrews
* @Date: September 23, 2010
* @Description: Takes the factorial via while looping
*/

#include <stdio.h>
main()
{
int start,stop=1,factorial=1;
printf("Take the factorial of: ");
scanf("%i",&start);
if (start >25) {
printf("Error. Answer too large!");
return;
}
while(stop<=start)
{
factorial=factorial*stop;
stop++;
}
printf("Factorial of %i is: %d",start,factorial);

//getchar(); //using getchar as a method of "pause" to keep terminal open.
return 0;
}

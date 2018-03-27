/**
* @Author: Kyle Andrews
* @Date: September 14, 2010
* @Description:
*/

#include <stdio.h>
main()
{
int x;
printf("Enter a numbe between 1 & 100.\n");
printf("\tINPUT: ");
scanf("%i", &x);
	if (x < 100) {
	printf("Your input is less than 100 OMFG.");
		} else {
		printf("Your input is not less than 100.");
		} 
	if (x == 100) {
	printf(" BUT! Your input IS 100.");
		} else if (x != 100) {
		printf(" Your input is not 100.");
		}
	if (x > 100) {
	printf("WTF??? TOO BIG YO.");
	}
	if (x < 100) {
	}
	
return 0;
}

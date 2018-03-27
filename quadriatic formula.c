/**
* @Author: Kyle
* Date: 08-31-2010
* Description: Quadriatic Formula
*
*/
#include <stdio.h>
#include <math.h>

main() {
	float a, b, c, answer1, answer2;
	printf("Enter your equation Ax^2+Bx+C\n\n");
	printf("Enter A: ");
	scanf("%f", &a);
	printf("Enter B: ");
	scanf("%f", &b);
	printf("Enter C: ");
	scanf("%f", &c);
	answer1=(-b+(sqrt(b*b-(four*a*c))))/(2*a);
	answer2=(-b-(sqrt(b*b-(four*a*c))))/(2*a);
	if (answer1 < 0 || answer2 < 0) {
	printf("The roots are: %f ",answer1);
	printf("and %f",answer2);
	} else {
	printf("The values are imaginary...");
	}

return 0;

}

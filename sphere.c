#define PI 3.14159
#include <stdio.h>
#include <math.h>
main() {
	int radius;
	float answer;
	printf("Enter the radius: ");
	scanf("%i",&radius);	
	answer=((4/3)*PI*pow(radius,3));
	printf("The volume of the sphere with a radius of: %i", radius);
	printf(" is: %f", answer);
	return 0;
	
}

#include <stdio.h>

#define PI   3.14159  /*an object macro*/
#define circlearea(r)   r=2*PI /*a one-line function macro with one parameter*/
#define multicommand 	{	\
		putchar('t');	\
		putchar('o');	\
			}
main()
{
float rad=0, area;

/*here we will prompt the user for rad and store it in &rad*/
printf("Enter a circle radius: ");
scanf("%f",&rad);
area=circlearea(rad);/*this expands as area=PI*rad*rad;*/
multicommand; /*an example of a multiline function macro-the lines will be copied here*/
printf("Area of the circle with radius %.2f is %f",rad,area);

}

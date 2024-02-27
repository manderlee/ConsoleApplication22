#include <stdio.h>
#include <math.h>

int main()
{
	float x,y;
	printf_s("Vvedite chislo x: ");
	scanf_s("%f", &x);
	
	y = (pow(x,3) + pow(x,2) - 10)/2;

	printf_s("%f", y);


	return(0);
}
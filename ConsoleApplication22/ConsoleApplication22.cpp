#include <stdio.h>
#include <math.h>

int main() {
	int x,y;
	printf("Vvedite chislo x: ");
	scanf_s("%d", &x);

	
	y = pow(x, 3) + pow(x, 2) - 10;

	printf_s("Znachenie vyrazhenia ravno %d,\n", x, y);

	return(0);
}
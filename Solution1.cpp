#include <stdio.h>
#include <math.h>
#include <assert.h>
int Otbor (double D, double a, double b, double c, double x1, double x2)
{
    if (D<0)
    printf ("%s\n", "No roots");
	if
	 (D>0)
	{
		x1 = (-b-sqrt(D))/(2*a);
		x2 = (-b+sqrt(D))/(2*a);
		printf ("%lg\n", x1);
		printf ("%lg\n", x2);
	} 
	if (D == 0)
	{
		x1 = (-b)/(2*a);
		printf ("%lg", x1);	
	}

}

int main () 
{
 int county;
    double x1, x2, a, b, c, D,x;

    
do {
	fflush(stdin);
}	while(scanf("%lg %lg %lg", &a, &b, &c) == 0);

		
	D = (b * b - 4 * a * c);
	Otbor (D, a, b, c, x1, x2);
	return 0;
}

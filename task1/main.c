#include <stdio.h>
#include <stdlib.h>


int main (void)
{
	double x = 0;
	double y = 2;
	int a = y;
	printf ("hi");
	printf ("x        y\n");
	
for (a = y;y - y*0.999000>=0.000001;x = x+0.001)
	{
    printf ("%f       %f\n",x,y);
    y = y*0.999000;
	}
               
	printf ("%f       %f\n",x,y);

	
	printf ("%lf",y);
	return 0;
}


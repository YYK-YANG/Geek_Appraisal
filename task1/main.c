#include <stdio.h>
#include <stdlib.h>


int main (void)
{
	double x = 0;
	double y = 0;
	int a = y;
	printf ("请输入初始值a\n");
	scanf ("%lf",&y);
	printf ("x        y\n");
	
for (a = y;y - y*0.999000>=0.000001;x = x+0.001)
	{
    printf ("%f       %f\n",x,y);
    y = y*0.999000;
	}
               
	printf ("%f       %f\n",x,y);

	
	printf ("最终定态为：%lf",y);
	return 0;
}


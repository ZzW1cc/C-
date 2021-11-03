#include <stdio.h>
int main()
{
	int x,y,z,max,min;
	x=20;
	y=30;
	z=40;
	max=x>y?x:y;
	max=z>max?z:max;
	min=x<y?x:y;
	min=z<min?z:min;
	printf("max=%d\n",max);
	printf("min=%d\n",min);
	return 0;
}

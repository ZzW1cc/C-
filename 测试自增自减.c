#include <stdio.h> 
int main()
{
	int x=3,y;
	y=(x++)+(x++)+(x++);
	printf("y=%d\n",y);
	x=3;
	y=(++x)+(++x)+(++x);
	printf("y=%d\n",y);
	return 0;
}

#include <stdio.h>
int main()
{
	int x,y,a,b,c,d;
	x=5678;
	a=x%10;
	b=x/10%10;
	c=x/10/10%10;
	d=x/1000;
	y=a*1000+b*100+c*10+d;
	printf("y=%d",y);
	return 0;
}

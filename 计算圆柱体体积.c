#define PI 3.14159
#include <stdio.h>
int main()
{
	float r,h,s,v;
	printf("请输入半径和高：");//输入一个输出的提示信息 
	scanf("%f%f",&r,&h);//从键盘输入半径和高 
	s=PI*r*r;
	v=s*h;
	printf("V=%f\n",v);
}

#define PI 3.14159
#include <stdio.h>
int main()
{
	float r,h,s,v;
	printf("������뾶�͸ߣ�");//����һ���������ʾ��Ϣ 
	scanf("%f%f",&r,&h);//�Ӽ�������뾶�͸� 
	s=PI*r*r;
	v=s*h;
	printf("V=%f\n",v);
}


//�󷽳���
//ax+by=c
//dx+ey=f
//x=ce-bf/ae-bd
//y=cd-af/bd-ae
#include <stdio.h>
int main()
{
	double a,b,c,d,e,f,x,y;
	printf("������x,yǰ���ϵ���Լ�c,f��ֵ\n");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&d,&e,&c,&f);
	x=(c*e-d*f)/(a*e-b*d);
	y=(c*d-a*f)/(b*d-a*e);
	printf("xֵΪ%lf,yֵΪ%lf",x,y);
	return 0; 
 }

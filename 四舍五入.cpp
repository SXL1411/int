#include<stdio.h>
int round1(float a)
{
 return (int)(a+0.5);
}
int main()
{
float x;
printf("������һ����������");
scanf("%f",&x);
printf("��������Ľ���ǣ�%d",round1(x)) ;
return 0;
} 

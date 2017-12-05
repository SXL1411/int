#include<stdio.h>
int round1(float a)
{
 return (int)(a+0.5);
}
int main()
{
float x;
printf("请输入一个浮点数：");
scanf("%f",&x);
printf("四舍五入的结果是：%d",round1(x)) ;
return 0;
} 

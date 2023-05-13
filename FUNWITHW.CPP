#include<stdio.h>
#include<conio.h>
void sum(int,int);
void main()
{
int a,b,result;
printf("\n calculate the sum of 2no's:");
printf("\n enter 2 no's:");
scanf("%d%d",&a,&b);
sum(a,b);
}
void sum(int a,int b)
{
printf("\n sum is %d",a+b);
}
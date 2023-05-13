#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{
int a,b,result;
clrscr();
printf("\n going to calculate the sum of 2 no's:");
printf("\n enter 2 no's:");
scanf("%d%d",&a,&b);
result=sum(a,b);
printf("\n sum is %d",result);
}
int sum(int a,int b)
{
return a+b;
}
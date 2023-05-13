#include<stdio.h>
#include<conio.h>
int sum();
void main()
{
int result;
printf("\n calculate the sum of 2 no's:");
result=sum();
printf("%d",result);
}
int sum()
{
int a,b;
printf("\n enter 2 no's:");
scanf("%d%d",&a,&b);
return a+b;
}
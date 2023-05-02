#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("\n enter 3 no's:");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
printf("\n a is highest:");
printf("\n c is highest:");
}
else
if(b>c)
{
printf("\n b is highest:");
printf("\n c is highest:");
}
else
if(c>a)
{
printf("\n c is highest:");
printf("\n a is highest:");
}
getch();
}
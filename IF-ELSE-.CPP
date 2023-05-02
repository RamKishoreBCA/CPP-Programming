#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("\n enter 3 no's:");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("\n a is highest:");
}
else
if((b>a)&&(b>c))
{
printf("\n b is highest:");
}
else
if((c>a)&&(c>b))
{
printf("\n c is highest:");
}
getch();
}

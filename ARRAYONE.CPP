#include<stdio.h>
#include<conio.h>
void main()
{
int num[10],i=0,es=0,os=0;
clrscr();
while(i<10)
{
printf("\n enter a no:");
scanf("%d",&num[i]);
if(num[i]%2==0)
{
es=es+num[i];
}
else
{
os=os+num[i];
}
i++;
}
printf("\n odd is %d",os);
printf("\n even is %d",es);
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int num,r,s=0,temp,n;
clrscr();
printf("\n enter a number:");
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=s+(r*r*r);
n=n/10;
}
if(temp==s)
printf("\n its an armstrong no");
else
printf("\n its not an armstrong no");
getch();
}
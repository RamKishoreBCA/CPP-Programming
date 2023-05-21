#include<stdio.h>
#include<conio.h>
void main()
{
void swap(int a,int b);
int a=10,b=20;
clrscr();
printf("\n before swap a%d b%d",a,b);
swap(a,b);
printf("\n after swap a%d b%d",a,b);
getch();
}
void swap(int x,int y)
{
int t;
t=x;
x=y;
y=t;
}
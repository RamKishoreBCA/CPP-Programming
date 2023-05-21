#include<stdio.h>
#include<conio.h>
void add();
int main()
{
add();
return 0;
}
void add()
{
int a,b,c;
printf("\n enter the values of a&b:");
scanf("%d%d",&a,&b);
c=a+b;
printf(" total %d",c);
getch();
}
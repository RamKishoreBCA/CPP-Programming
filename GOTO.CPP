#include<stdio.h>
#include<conio.h>
void main()
{
int num;
int i=1;
printf("\n enter the number whose you want to print:");
scanf("%d",&num);
table:
{
printf("\n %dx%d=%d",num,i,num*i);
i++;
}
if(i==10)
goto table;
getch();
}
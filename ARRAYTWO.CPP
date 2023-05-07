#include<stdio.h>
#include<conio.h>
void main()
{
int arr[3][3],i,j,sum=0;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\n enter dat:");
scanf("%d",&arr[i][j]);
sum=sum+arr[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t",arr[i][j]);
printf("\n");
printf("\n sum is %d",sum);
}
getch();
}
}

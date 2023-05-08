#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100];
int i,len;
int flag=0;
printf("\n enter a string:");
fgets(str,sizeof(str), stdin);
len=strlen(str);
for(i=0;i<len/2;i++)
if(str[i]!=str[len-i-2])
{
flag=1;
break;
}
if(flag==1)
{
printf("\n %s is not an palindrome", str);
}
else
{
printf("\n %s is an palindrome",str);
}
getch();
}
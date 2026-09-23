#include<stdio.h>
int func(int n)
{
int i=0;
while(n%10!=0)
{
n=n+3;
i++;
}
n=n-i;
return n;
}
void main()
{
printf("%d",func(35));
}
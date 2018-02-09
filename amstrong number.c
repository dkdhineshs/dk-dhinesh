#include<stdio.h>
void main()
{
int a,b,c,d=0;
scanf("%d",&a);
c=a;
while(a!=0)
{
 b=a%10;
 d=c+(b*b*b);
 a=a/10;
 }
 if(d==a)
 printf("%d is amstrong number",a);
 else
 printf("%d is not amstrong number",a);
 getch()
 }

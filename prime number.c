#include<stdio.h>
int main() 
{
  int a,b,c=0,d;
  scanf("%d",&a);
  d=a;
  while(a!=0)
  {
      b=a%10;
      c=c*10+b;
      a=a/10;
  }
  
  if(d==c)
  printf("%d  is prime number",d);
  else
  printf("%d is not prime number",d);
  
}

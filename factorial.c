#include <stdio.h>
 
void main()
{
  int a, b, c = 1;
  printf("enter the value\n");
  scanf("%d",&b);
  
  for(a=1;a<=b;a++)
  
  c=c*a;
  printf("%d=%d \n",b,c);
  return 0;

 }

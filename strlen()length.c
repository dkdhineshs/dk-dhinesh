#include <stdio.h>
#include <string.h>
 
int main()
{
   char s[100];
   int length;
 
   printf("Enter a string to calculate it's length\n");
   gets(s);
 
   length = strlen(s);
 
   printf("Length of the string = %d\n",length);
 
   return 0;
}

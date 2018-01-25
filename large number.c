#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a, b, big;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		big=a;
	}
	else
	{
		big=b;
	}
	printf("Biggest of the two number is %d",big);
	getch();
}

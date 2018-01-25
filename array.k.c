#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10];   // declares 10-integer array
	int i, j;
	clrscr();

	// load arr with values 1 through 10
	for(i=1, j=0; i<=10; i++, j++)
	{
		arr[j] = i;
	}

	// displaying element with index of arr
	for(i=0; i<10; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	getch();
}

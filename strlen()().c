#include <stdio.h>
int main()
{
    char a[1]="sankari", j;

    printf("Enter a string: ");
    //scanf("%s", a);

    for(j = 0; a[j] != '\0'; ++j);

    printf("Length of string: %d", j);
    return 0;
}

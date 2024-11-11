#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter the value a:");
    scanf("%d",&a);
    printf("Enter the value b :");
    scanf("%d",&b);
    if(a==b)
        printf("a is equal to b");
    else if(a<b)
        printf("a is less than b");
    else
        printf("a is greater than b");
}

#include<stdio.h>
void main()
{
    int n,pow,count=1,val=1;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter the value of power:");
    scanf("%d",&pow);
    for(;count<=pow;count++)
    {
        val=val*n;
        printf("%d\n",val);
    }
}

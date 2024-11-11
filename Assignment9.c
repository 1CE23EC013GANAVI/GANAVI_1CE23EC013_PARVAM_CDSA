#include<stdio.h>
void main()
{
    int digits,n=0;
    printf("Enter digits:");
    scanf("%d",&digits);
    while(digits>0)
    {
        n=n+(digits%10);
        digits=digits/10;
    }
    printf(" SUM OF DIGITS=%d",n);
}

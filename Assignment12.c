#include<stdio.h>

int element(int *arr,int n,int pointer)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(*(arr+i)==pointer)
        {
            count++;
        }
    }
    return count;
}
void main()
{
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int pointer;
    printf("Enter the element to be pointed:");
    scanf("%d",&pointer);
    int count=element(arr,n,pointer);
    printf("Pointed element %d appears %d times\n",pointer,count);
}

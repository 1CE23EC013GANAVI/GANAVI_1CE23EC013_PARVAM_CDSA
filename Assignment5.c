#include<stdio.h>
void main()
{
    int age;
    int sal;
    printf("Enter age :");
    scanf("%d",&age);
    printf("Enter income:");
    scanf("%d",&sal);
    if(age<18)
        printf("Loan not eligible");
    else if(age>=18 && age<=25 && sal<5000)
        printf("Loan not eligible\n");
    else if(age>=26 && age<=40 && sal<10000)
        printf("Loan not eligible\n");
    else if(age>40 && sal<40000)
        printf("Loan not eligible\n");
    else
    { printf("Loan is eligible\n");}
}


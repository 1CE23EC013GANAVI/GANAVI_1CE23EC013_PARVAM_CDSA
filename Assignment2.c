#include<stdio.h>
void main()
{
    char ch,str[100],sen[100];
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("Enter a string:");
    scanf("%s",&str);
    printf("Enter a sentence:");
    scanf("%[^EOF]",sen);
    printf("%s \n %s \n %s",ch,str,sen);
}

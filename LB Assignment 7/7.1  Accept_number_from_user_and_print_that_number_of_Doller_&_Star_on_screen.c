#include<stdio.h>
#include<conio.h>
void Pattern(int iNo)
{
    int i = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        printf(" $ ");
        printf(" * ");
    }
}
int main()
{
    int iValue = 0;
    printf("\n \n Enter number from user to print Number of $ and * on screen.: " );
    scanf("%d",&iValue);
    Pattern(iValue);
    printf("\n \n Thank You...!!!");
    getch();
    return 0;
}

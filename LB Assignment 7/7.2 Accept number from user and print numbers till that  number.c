#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
    int i = 0;
    if(iNo <=0)
    {
        printf("\n Invalid Input....!");
    }
    for(i = 1; i <= iNo; i++)
    {
        printf(" %d",i);
    }
}
int main()
{
    int iValue = 0;
    printf("\n Enter Number : ");
    scanf("%d",&iValue);
    Display(iValue);
    printf("\n \n Thank you...!!!");
    getch();
    return 0;
}

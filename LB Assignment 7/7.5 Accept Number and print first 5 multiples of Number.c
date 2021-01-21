#include<stdio.h>
#include<conio.h>
void MultipleDisplay(int iNo)
{
    int i = 1;
    while(i <= 5)
    {
            printf(" %d",iNo*i);
            i++;
    }
}
int main()
{
    int iValue = 0;
    printf("\n Enter Number to print first 5 Multiple of Number : ");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    printf("\n Thank You....!!!!");
    getch();
    return 0;
}

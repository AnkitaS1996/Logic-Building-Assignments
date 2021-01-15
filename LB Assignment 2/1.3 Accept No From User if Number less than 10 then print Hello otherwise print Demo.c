#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
    if(iNo<=10)
    {
        printf("\n Hello");
    }
    else
    {
        printf("\n Demo");
    }
}
int main()
{
    int iValue=0;
    printf("\n Enter Number From User =>  ");
    scanf("%d",&iValue);
    Display(iValue);
    printf("\n \n Press Any Key To Continue......!");
    getch();
    return 0;
}

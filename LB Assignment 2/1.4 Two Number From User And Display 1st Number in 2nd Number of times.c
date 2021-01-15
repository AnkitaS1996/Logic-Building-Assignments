#include<stdio.h>
#include<conio.h>
void Display(int iNo,int iFrequency)
{
    int i=0;
    if(iFrequency < 0)
    {
        iFrequency = - iFrequency;
    }
    for(i = 1; i <= iFrequency; i++)
    {
        printf("\t %d",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("\n =======================-----------********-----------===============================\n");
    printf("\n \n Enter Number => ");
    scanf("%d",&iValue);
    printf("\n Enter Frequency => ");
    scanf("%d",&iCount);
    Display(iValue,iCount);
    printf("\n \n Press Any Key to Continue.....!");
    printf("\n =======================-----------********-----------===============================\n");
    getch();
    return 0;
}

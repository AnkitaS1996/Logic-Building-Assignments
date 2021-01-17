#include<stdio.h>
#include<conio.h>
void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i=1;i<iNo;i++)
    {
        if(iNo%i == 0 && i%2==0 )
        {
            printf(" %d",i);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("\n \n Enter Number : ");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    printf("\n \n Press Any Key To Continue......!!!");
    getch();
    return 0;
}

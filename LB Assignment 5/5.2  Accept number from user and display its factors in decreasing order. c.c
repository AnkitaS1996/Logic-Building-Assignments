#include<stdio.h>
#include<conio.h>
void FactRev(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        printf("\n Invalid Number....!!!!!");
        iNo = - iNo;
    }

    for(i=10; i < iNo; i--)
    {
        if(iNo%i == 0)
        {
            printf("\n %d",i);
        }
    }

}
int main()
{
    int iValue = 0;
    printf("\n \n Enter Number To Display Factor in Decreasing Order");
    scanf("%d",&iValue);

    FactRev(iValue);

    printf("\n \n Thank You...!!!!");
    getch();
    return 0;
}

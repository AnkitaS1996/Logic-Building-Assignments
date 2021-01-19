#include<stdio.h>
#include<conio.h>
void NonFact(int iNo)
{
    int i=0;
    if(iNo <= 0)
    {
        printf("\n Invalid Number..!!!!");
    }
    for(i=1; i <= iNo; i++)
    {
        if(iNo%i != 0)
        {
            printf("\n %d",i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("\n \n Enter Number to display its all non factors : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    printf("\n \n Thank You Sir....!!!!!!!");
    getch();
    return 0;
}

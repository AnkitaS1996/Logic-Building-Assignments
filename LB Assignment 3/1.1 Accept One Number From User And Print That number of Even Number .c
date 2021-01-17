#include<stdio.h>
#include<conio.h>
void PrintEven(int iNo)
{
    int i = 1;
    if(iNo <= 0)
    {
        return;
    }

    while(iNo*2 >= i)
    //for(i=1;iNo*2>=i;i++)
    {
            if(i%2 == 0)
            {
                 printf(" %d",i);
            }
            i++;
    }
}
int main()
{
    int iValue = 0;
    printf("\n \n Enter Number : ");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}

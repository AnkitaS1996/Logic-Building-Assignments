#include<stdio.h>
#include<conio.h>
void OddDisplay(int iNo)
{
    int i = 1;
    while(i < iNo)
    {
        if(i%2 != 0)
        {
            printf("\n %d", i);
        }
        i++;
    }

}
int main()
{
    int iValue = 0;
    printf("\n Enter Number to print All Odd Number up to Number : ");
    scanf("%d",&iValue);
    OddDisplay(iValue);
    printf("\n Thank You...!!!!");
    getch();
    return 0;
}

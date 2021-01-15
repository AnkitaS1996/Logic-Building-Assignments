#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
            int i=0;
            while(iNo>i)
            {
                    printf(" * ");
                    iNo--;
            }
}
int main()
{
            int iValue = 0;
            printf("\n Enter Number To Print Star =>");
            scanf("%d",&iValue);
            Display(iValue);
            return 0;
}

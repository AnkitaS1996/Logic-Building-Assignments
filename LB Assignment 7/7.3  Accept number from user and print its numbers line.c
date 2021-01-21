#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
    int i = -iNo;
     while(i <= iNo)
     {
         printf(" \t %d",i);
         i++;
     }
}
int main()
{
    int iValue = 0;
    printf("\n \n Enter  Number to print its Number Line : ");
    scanf("%d",&iValue);
    Display(iValue);
    printf("\n \n Thank You...!!!");
    getch();
    return 0;
}

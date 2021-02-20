/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////  Statement =  Accept Number Of Rows And Number Of Columns From User And Display Below Pattern.c
///////        Input :  iRow = 5 iCol = 5
///////       Output : a  b  c  d  e
///////                1  2  3  4  5
//////                 a  b  c  d  e
//////                 1  2  3  4  5
//////                 a  b  c  d  e
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Pattern(int,int);
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("\n Enter Number Of Rows And Number Of Columns : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    printf("\n========================================================================\n");
    printf("\n Thank You For Watching Press Any Key to Continue..\n");
    printf("\n========================================================================\n");
    getch();
    return 0;
}
void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    char ch = 'a';
    printf("\n========================================================================\n");
    for(i=1;i<=iRow;i++)
    {
        ch = 'a';
        for(j=1;j<=iCol;j++)
        {
            if(i%2 != 0)
            {
                printf(" %2c",ch++);
            }
            else
            {
                printf(" %2d",j);
            }
        }
        printf("\n");
    }
    printf("\n========================================================================\n");
}

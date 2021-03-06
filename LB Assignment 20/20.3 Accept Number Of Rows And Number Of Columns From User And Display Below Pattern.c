//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////// Statement 20.3 = Accept Number Of Rows And Number Of Columns From User And Display Below Pattern.
//////      Input : iRow = 6 iCol = 6
//////     Output : *  *  *  *  *  *
//                  *           *  *                  *
//                  *        *     *
//                  *     *        *
//                  *  *           *
//                  *  *  *  *  *  *
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Pattern(int,int);

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("\n========================================================================\n");
    printf("\n Enter Number Of Rows And Number Of Columns : ");
    scanf("%d%d",&iValue1,&iValue2);
    printf("\n========================================================================\n");
    Pattern(iValue1,iValue2);
    printf("\n========================================================================\n");
    printf("\n Thank You...!!! \n\n Press Any Key to continue..!!\n");
    printf("\n========================================================================\n");
    getch();
    return 0;
}
void Pattern(int iRow,int iCol)
{
    int No1 = 0, No2 = 0;
    printf("\n========================================================================\n\n");
    for(No1 = 1;No1 <= iRow;No1++)
    {
        for(No2 = 1;No2 <= iCol;No2++)
        {
            if(No1==1 || No2==1 || No1==iRow || No2==iCol || No1+No2 == iCol+1)
            {
                printf("  %c",'*');
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n========================================================================\n");
    return;
}

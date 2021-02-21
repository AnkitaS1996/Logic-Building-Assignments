////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Statement =  Accept Number Of Rows And Number Of Columns From User And Display Below Pattern.
//      Input =  iRow = 6 iCol = 5
//     Output =  *   *   *   *   *
//               *   @   @   @   *
//               *   @   @   @   *
//               *   @   @   @   *
//               *   @   @   @   *
//               *   *   *   *   *
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

void Pattern(int,int);

int main()
{
    int iRow = 0, iCol = 0;
    printf("\n=========================================================================\n");
    printf("\n Enter Any Number Of Rows And Number Of Columns : ");
    scanf("%d%d",&iRow,&iCol);
    Pattern(iRow,iCol);
    printf("\n=========================================================================\n");
    printf("\n Thank You...!!! Press Any Key to continue..!!\n");
    printf("\n=========================================================================\n");
    getch();
    return 0;
}

void Pattern(int iNo1,int iNo2)
{
    int i = 0,j = 0;
    printf("\n========================================================================\n");
    for(i = 1;i <= iNo1;i++)
    {
        for(j = 1;j <= iNo2;j++)
        {
            if(i==1 || j==1 || i == iNo1 || j == iNo2)
            {
                printf("  *");
            }
            else
            {
                printf("  @");
            }
        }
        printf("\n");
    }
    printf("\n=========================================================================\n");
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////    Statement =  Accept Number Of Rows And Number Of Columns From User And Display Pattern.c
////                I/P :   Row =   3  ,   Column =   4 .
/////             O/P :     *       #       *      #
////                           *       #       *      #
////                           *       #       *      #
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
/////Function Declaration
void Pattern(int,int);

int main()
{
            int iValue1 = 0, iValue2 = 0;
            printf("\n======================$$$$$$$$*******$$$$$$$$======================\n");

            printf("\n Enter Number Of Rows And Number Of Column To Print Pattern : ");
            scanf("%d%d",&iValue1,&iValue2);
            printf("\n======================*****************************======================\n");

            Pattern(iValue1,iValue2);
            printf("\n======================*****************************======================\n");

            printf("\nThank You...!!!!\n");
            printf("\n======================*****************************======================\n");

            getch();
            return 0;
}

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iColumn; j++)
        {

                printf("    *");
                printf("    #");
        }
        printf("\n");
    }
    return;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////       Statement =  Accept Number Of Rows And Number Of Columns From User And Display Below Pattern.
//////           Input : iRow = 4 iCol = 5
//////          Output : 4 4 4 4 4
//////                   3 3 3 3 3
//////                   2 2 2 2 2
//////                   1 1 1 1 1
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void NoPattern(int,int);
int main()
{
    int RNo = 0, CNo = 0;
    printf("\n===================================================\n");
    printf("Enter Number Of Rows And Number Of Columns : ");
    scanf("%d%d",&RNo,&CNo);
    NoPattern(RNo,CNo);
    printf("\n===================================================\n");
    printf("\n Thank You For Watching...!!,Press Any Key To Continue \n");
    printf("\n===================================================\n");
    getch();
    return 0;
}
void NoPattern(int No1,int No2)
{
   int i = 0,j = 0;
   int Num = 4;
   printf("\n===================================================\n");
   for(i = 1;i <= No1;i++)
   {
       for(j = 1;j <= No2; j++)
       {
           printf(" %d",Num);
       }
       Num--;
       printf("\n");
   }
   printf("\n===================================================\n");
}

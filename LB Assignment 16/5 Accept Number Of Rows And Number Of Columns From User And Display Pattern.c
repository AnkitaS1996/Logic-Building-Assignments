///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////       Statement =  Accept Number Of Rows And Number Of Columns From User And Display Below Pattern
//////           Input : iRow = 3 iCol = 4
//////          Output : 1  2   3   4
//////                   5  6   7   8
//////                   9  10  11  12
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void NoPattern(int,int);
int main()
{
    int RNo = 0, CNo = 0;
    printf("\n===================================================\n");
    printf("\n Enter Any Number Of Rows And Number Of Column : ");
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
   int Num = 1;
   printf("\n===================================================\n");
   printf("\n");
   for(i = 1;i <= No1;i++)
   {
       for(j = 1;j <= No2; j++)
       {
           printf("  %2d",Num);
           Num++;
       }
       printf("\n");
   }
   printf("\n===================================================\n");
}


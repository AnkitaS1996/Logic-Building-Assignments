////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statement = Accept N Number from user and return Difference between Summation Of Even Elements And Summation Of Odd Elements.c
///    INPUT  = N :    6
/// Elements  = 85      66     3     80     93     88
///   OUTPUT  = 53 (234-181)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int i = 0, E_Sum = 0,O_Sum = 0;

    for(i = 0;i < iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            E_Sum = E_Sum + Arr[i];
        }
        else
        {
            O_Sum = O_Sum + Arr[i];
        }
    }
    return(E_Sum - O_Sum);
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *P = NULL;

    printf("\n Enter Number Of Elements : ");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    if(P==NULL)
    {
        printf("\n Unable To Allocate Memory");
        return-1;
    }

    printf("\n ===========================================================\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("\n Enter %d Elements : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    iRet = Difference(P,iSize);
    printf("\n ===========================================================\n");
    printf("\n Result is %d",iRet);

    free(P);

    printf("\n\n Thank You...!!!");

    getch();
    return 0;
}

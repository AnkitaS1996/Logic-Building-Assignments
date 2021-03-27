////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements = 24.3 Accept N Numbers From User And Return The Difference Between Largest And Smallest Number.c
///   Input : N : 6
///          Elements : 85 66 3 66 93 88
///  Output : 90 (93 -3)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Diff_Smallest_Largest_No(int Arr[],int iLength)
{
    int i = 0,iMax = 0,iMin = 0;
    for(i = 0;i < iLength;i++)
    {
        if(i == 0)
        {
            iMax = iMin = Arr[i];
        }
        if(iMax < Arr[i])
        {
            iMax = Arr[i];
        }
        if(iMin > Arr[i])
        {
            iMin = Arr[i];
        }
    }
    return(iMax - iMin);
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *P = NULL;

    printf("\n===========================================================\n");
    printf("\n Enter Number Of Elements : ");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    printf("\n===========================================================\n");
    if(P == NULL)
    {
        printf("\n Unable To Allocate Memory.");
        return - 1;
    }

    printf("\n===========================================================\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter %d Elements : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    printf("\n===========================================================\n");
    iRet = Diff_Smallest_Largest_No(P,iSize);

    printf("\n Difference between Smallest And Largest Number is = %d\n",iRet);

    free(P);
    printf("\n===========================================================\n");

    printf("\n Thank You..!!!\n");
    printf("\n ==========================================================\n");

    getch();
    return 0;
}

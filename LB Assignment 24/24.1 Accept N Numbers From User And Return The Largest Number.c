//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statement = 24.1 Accept N Numbers From User And Return The Largest Number.c
///   Input = N : 6
///           Elements : 85 66 3 66 93 88
///  Output = 93
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Largest_Number(int Arr[],int iLength)
{
    int i = 0,iMax = 0;

    for(i = 1;i < iLength;i++)
    {
        if(Arr[i] == 0)
        {
            iMax == Arr[i];
        }
        if(iMax < Arr[i])
        {
            iMax = Arr[i];
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int *P = NULL;

    printf("\n===========================================================\n");
    printf("\n Enter Number Of Elements : ");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    printf("\n===========================================================\n");
    if(P==NULL)
    {
        printf("\n Unable To Allocate Memory.");
        return - 1;
    }

    printf("\n===========================================================\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter %d Element : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    iRet = Largest_Number(P,iSize);

    printf("\n===========================================================\n");
    printf("\n Largest Number is %d.\n",iRet);

    free(P);
    printf("\n===========================================================\n");

    printf("\n Thank You..!!!\n");
    printf("\n ==========================================================\n");

    getch();
    return 0;
}

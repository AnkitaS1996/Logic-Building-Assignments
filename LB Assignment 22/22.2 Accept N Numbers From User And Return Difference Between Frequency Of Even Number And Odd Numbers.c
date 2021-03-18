/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statement = 22.2 Accept N Numbers From User And Return Difference Between Frequency Of Even Number And Odd Numbers.c
///    Input : N :  7
/// Elements :  85  66  3  80  93  88  90
///   Output : 1  (4-3)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Even_Odd_No_Frequency(int Arr[],int iLength)
{
    int i = 0,E_Freq = 0,O_Freq = 0;

    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            E_Freq++;
        }
        else
        {
            O_Freq++;
        }
    }
    return (E_Freq-O_Freq);
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *P = NULL;

    printf("\n===================================================================\n");

    printf("\n Enter Number Of N Elements : ");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    if(P == NULL)
    {
        printf("\n Unable To Allocate Memory.");
        return - 1;
    }
    printf("\n===================================================================\n");

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter %d Elements : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    printf("\n===================================================================\n");

    iRet = Even_Odd_No_Frequency(P,iSize);

    printf("\n===================================================================\n\n");
    printf("Even And Odd Numbers Of Frequency is = %d\n",iRet);
    printf("\n===================================================================\n");

    free(P);

    printf("\n Thank You..!!!\n");
    printf("\n===================================================================\n");

    getch();
    return 0;
}

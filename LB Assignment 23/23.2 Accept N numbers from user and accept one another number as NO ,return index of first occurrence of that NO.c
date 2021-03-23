///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statement = 23.2 Accept N numbers from user and accept one another number as NO ,return index of first occurrence of that NO.c
///  Input :       N : 6
///               NO : 66
///         Elements : 85 66 3 66 93 88
/// Output : 1
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  Input :       N : 6
///               NO : 12
///         Elements : 85 11 3 15 11 111
/// Output : -1
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Index_First_Occurrence_No(int Arr[],int iLength,int iNo)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
           return i++;
        }
    }
    return 0;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int *P = NULL;

    printf("\n===========================================================\n");
    printf("\n Enter Number Of Elements : ");
    scanf("%d",&iSize);

    printf("\n===========================================================\n");
    printf("\n Enter The Number : ");
    scanf("%d",&iValue);

    P = (int*)malloc(iSize * sizeof(int));

    if(P==NULL)
    {
        printf("\n Unable to Allocate Memory.");
        return - 1;
    }

    printf("\n===========================================================\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter %d Element : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    iRet = Index_First_Occurrence_No(P,iSize,iValue);
    printf("\n===========================================================\n");
    if(iRet == 0)
    {
        printf("\n There Is Number %d Not There in Array\n",iValue);
    }
    else
    {
        printf("\n First Occurrence Of Number is %d\n",iRet);
    }
    printf("\n===========================================================\n");
    free(P);
    printf("\n Thank You..!!\n");
    printf("\n===========================================================\n");
    getch();
    return 0;
}

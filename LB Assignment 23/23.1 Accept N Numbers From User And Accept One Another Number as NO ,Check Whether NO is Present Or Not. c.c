///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statement = 23.1 Accept N numbers from user and accept one another number as NO,check whether NO is present or not.c
///  Input :       N : 6
///               NO : 66
///         Elements : 85 66 3 66 93 88
/// Output : TRUE
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  Input :      N  : 6
///              NO  : 12
///         Elements : 85 11 3 15 11 111
///  Output : FALSE
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
     int i = 0;
     while(i<iLength)
     {
         if(Arr[i]==iNo)
         {
             return TRUE;
         }
         i++;
     }
     return FALSE;
}

int main()
{
     int iSize = 0,iCnt = 0,iValue = 0;
     int *P = NULL;
     BOOL bRet = FALSE;

     printf("\n===========================================================\n");
     printf("\n Enter Number Of Elements : ");
     scanf("%d",&iSize);

     printf("\n===========================================================\n");
     printf("\n Enter A Number : ");
     scanf("%d",&iValue);

     P = (int*)malloc(iSize * sizeof(int));

     if(P==NULL)
     {
         printf("\n Unable To Allocate Memory.");
         return - 1;
     }
     printf("\n============================================================\n");
     for(iCnt = 0;iCnt < iSize;iCnt++)
     {
         printf("\n Enter %d Elements : ",iCnt+1);
         scanf("%d",&P[iCnt]);
     }
     printf("\n=============================================================\n");
     bRet = Check(P,iSize,iValue);
     printf("\n=============================================================\n");
     if(bRet == TRUE)
     {
         printf("\n %d Number is Present.",iValue);
     }
     else
     {
         printf("\n %d Number is Not Present.",iValue);
     }
     printf("\n==============================================================\n");
     free(P);
     printf("\n==============================================================\n");
     printf("\n Thank You\n");
     printf("\n===============================================================\n");
     getch();
     return 0;
}

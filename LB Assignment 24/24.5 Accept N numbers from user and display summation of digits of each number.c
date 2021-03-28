////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 24.5 Accept N numbers from user and display summation of digits of each number.c
///   Input :     N    : 6
///           Elements : 8225 665 3 76 953 858
///  Output : 17 17 3 13 17 21
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void Digit_Sum_Display(int Arr[],int iLength)
{
   int i = 0,Sum = 0,Temp = 0,Dig = 0;

   for(i = 0;i < iLength;i++)
   {
       Temp = Arr[i];
       Sum = 0;
       while(Temp > 0)
       {
           Dig = (Temp%10);
           Sum = Sum + Dig;
           Temp /= 10;
       }
       printf("\n Sum Of Numbers Of Digits is = %d\n",Sum);
   }
   return;
}

int main()
{
    int iSize = 0,iCnt = 0;
    int *P = NULL;

    printf("\n===========================================================\n");
    printf("\n Enter Number Of Elements : ");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    printf("\n===========================================================\n");
    if(P == NULL)
    {
        printf("\n Unable To Allocate Memory..");
        return - 1;
    }

    printf("\n===========================================================\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter %d Elements : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    printf("\n===========================================================\n");

    Digit_Sum_Display(P,iSize);
    printf("\n===========================================================\n");

    free(P);

    printf("\n Thank You..!!!\n");
    printf("\n ==========================================================\n");

    getch();
    return 0;

}

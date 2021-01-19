#include<stdio.h>
#include<conio.h>
int Multiply(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 != 0 && iNo2 != 0 && iNo3 != 0)
    {
         return iNo1 * iNo2 * iNo3;
    }
   else if(iNo1 != 0 && iNo2 == 0 && iNo3 == 0 || iNo1 == 0 && iNo2 == 0 && iNo3 != 0 || iNo1 == 0 && iNo2 != 0 && iNo3 == 0)
   {
       return iNo1 + iNo2 + iNo3;
   }
   else
   {
       if(iNo1 * iNo2 != 0)
       {
           return iNo1 * iNo2;
       }
       else if(iNo1 * iNo3 != 0)
       {
           return iNo1 * iNo3;
       }
       else
       {
             return iNo2 * iNo3;
       }
   }
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("\n Enter Three Number to is Multiplication : ");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("\n Multiplication of Three Number is = %d.", iRet);
    getch();
    return 0;
}

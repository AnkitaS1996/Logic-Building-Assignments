#include<stdio.h>
#include<conio.h>
int  Divide(int iNo1,int iNo2)
{
            int iAns = 0;

            if(iNo2 <=0)
            {
                    return -1 ;
            }

            iAns = iNo1/iNo2;
            return iAns;
}
int main()
{
           int iNum1 = 0, iNum2 = 0,iRet = 0;

           printf("\n \n Enter any two Numbers ==> ");
           scanf("%d%d",&iNum1,&iNum2);

           iRet = Divide(iNum1,iNum2 );

           printf("Division is %d", iRet);

           return 0;
}

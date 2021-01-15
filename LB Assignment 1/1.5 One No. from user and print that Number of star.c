#include<stdio.h>
#include<conio.h>
void Accept(int iNo)
{
            int icnt = 0;
            printf("\n==================*********=======================\n");
            for(icnt=0;icnt<=iNo-1;icnt++)
            {
                    printf(" * ");
            }
            printf("\n==================*********=======================\n");
            return;
}
int main()
{
            int iValue = 0;
            iValue = 5;

            Accept(iValue);

            printf("\n==================*********=======================\n");
            printf("\n Thank You...!!!\n");
            printf("\n==================*********=======================\n");

            getch();
            return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 26.3 Accept character from user. If it is capital then display all the characters from the input characters till Z. If input
///                 character is small then print all the characters in reverse order till a.In other cases return directly.c
///     Input : Q
///    Output : Q R S T U V W X Y Z
///     Input : m
///    Output : m l k j i h g f e d c b a
///     Input : 8
///    Output :
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
void Display(char ch)
{
    int i = 0;
    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch; ch <= 'Z';ch++)
        {
            printf(" %c",ch);
        }
    }
    else
    {
        if(ch >= 'a' && ch <= 'z')
        {
            for(i = ch;ch >= 'a';ch--)
            {
                printf(" %c",ch);
            }
        }
        else
        {
            printf("\n Invalid Character..!!!\n");
        }
    }

    return;
}
int main()
{
    char cValue = 0;

    printf("\n==============================================================\n");
    printf("\n Enter The Character : ");
    scanf("%c",&cValue);

    printf("\n==============================================================\n");
    Display(cValue);
    printf("\n==============================================================\n");

    printf("\n Thank You..!!!");
    printf("\n==============================================================\n");

    _getch();
    return 0;

}

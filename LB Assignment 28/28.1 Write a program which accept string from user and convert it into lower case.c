////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///    Statements 28.1 Write a program which accept string from user and convert it into lower case.c
///	     Input : “MarvellouS Multi OS”
///     Output : marvellous multi os
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

void StrLowerCase(char *cStr)
{
	while(*cStr != '\0')
	{
		if(*cStr >= 65 && *cStr <= 90)
		{
			*cStr = *cStr + 32;
		}
		*cStr++;
	}
	return;
}

int main()
{
	char cArr[20];

	printf("\n============================================\n");
	printf("\n Enter String : ");
	scanf("%[^\n]",&cArr);
	printf("\n============================================\n");

	StrLowerCase(cArr);
	printf("\n============================================\n");

	printf("\n Given string is LowerCase is = %s.\n",cArr);
	printf("\n============================================\n");

	printf("\n Thank You..!!!\n");
	printf("\n============================================\n");

	_getch();
	return 0;
}

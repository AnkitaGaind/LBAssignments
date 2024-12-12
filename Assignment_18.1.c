/*Write a program which accept number from user and display below pattern.

Input : 5
Output : * * * * * # # # # #

Input : -5
Output : * * * * * # # # # #

*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {  
        printf(" * ");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {  
        printf(" # ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
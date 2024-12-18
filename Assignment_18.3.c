/*Write a program to find even factorial of given number. 

Input : 5
Output : 8 (4 * 2)

Input : -5
Output : 8 (4 * 2)

Input : 10
Output : 3840 (10 * 8 * 6* 4 * 2)

*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {  
       if(iCnt % 2 == 0)
       {
        iFact = iFact * iCnt;
       }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of given number is : %d", iRet);

    return 0;
}
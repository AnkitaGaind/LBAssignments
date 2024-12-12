/*Write a program which returns difference between even factorial 
and odd factorial of given number. 

Input : 5
Output : -7 (8 - 15)

Input : -5
Output : -7 (8 - 15)

Input : 10
Output : 2895 (3840 - 945)

*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iFactEven = 1, iFactOdd = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {  
       if(iCnt % 2 == 0)
       {
        iFactEven = iFactEven * iCnt;
       }
       else
       {
        iFactOdd = iFactOdd * iCnt;
       }
    }

    return iFactEven - iFactOdd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("The factorial difference of given number is : %d", iRet);

    return 0;
}
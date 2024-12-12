/*Accept amount in US dollar and return its corresponding value in indian currency.
(Consider 1$ as 70 rupees)

Input : 10
Output : 700

Input : 1200
Output : 84000

*/

#include<stdio.h>

int DollartoINR(int iNo)
{
    int iResult = 0;

    iResult = iNo * 70;
    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number of USD: ");
    scanf("%d", &iValue);

    iRet = DollartoINR(iValue);

    printf("Value in INR is : %d", iRet);

    return 0;
}
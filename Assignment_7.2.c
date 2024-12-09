/*Accept amount in US dollar and return its corresponding value
in Indian currency. Consider 1$ as 70 rupees.

Input : 10
Output : 700

Input : 3
Output : 270

Input : 1200
Output : 84000

*/
# include<stdio.h>

int DollerToINR(int iNo)
{
int iResult =0;
iResult = iNo *70;
return iResult;
}

int main ()
{
int iValue =0, iRet = 0;

printf("Enter number of USD\n");
scanf("%d",&iValue);

iRet = DollerToINR(iValue);

printf("Value in INR is : %d", iRet);

return 0;
}
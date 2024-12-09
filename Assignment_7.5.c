/*Write a program which returns difference between 
Even factorial and odd factorial of given number

Input : 5
Output : -7 (8-15)

Input : -5
Output : -7 (8-15)

*/

#include<stdio.h>

int FactorialDiff(int iNo)
	{
	
	if(iNo < 0)
	{
	  iNo = -iNo;
	}
	
	  int iCnt = 0, iEveFact = 1, iOddFact = 1;
	  
	  for(iCnt = 1; iCnt<=iNo; iCnt++)
	  {
		if(iCnt % 2 == 0)
		{
		  iEveFact = iEveFact * iCnt;
		}
		else
		{
		   iOddFact = iOddFact * iCnt;
		}
	}
	  
	  return iEveFact - iOddFact; 
	}
int main()
{
  int iValue = 0, iRet = 0;
  
  printf("Enter number\n");
  scanf("%d", &iValue);
  
  iRet = FactorialDiff(iValue);
  
  printf("Factorial difference is : %d", iRet);
  
  return 0;


}
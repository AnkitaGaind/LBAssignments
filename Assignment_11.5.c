/*Write a program which accepts number from user and count the frequency of such digits which are less than 6.

Input : 2395
Output : 3

Input : 1018
output : 3

Input : 9440
Output : 3

Input : 96672
Output : 1
*/

#include<stdio.h>

int Count(int iNo)
{
  int iCnt = 0;
  int iDigit = 0;
  
   if(iNo < 0)
   {
	   iNo = -iNo;
   }
   
  while(iNo > 0)
  { 
    iDigit = iNo % 10;
	if(iDigit < 6)
	{
	  iCnt++;
	}
	iNo = iNo/10;
	}
	return iCnt;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  
  printf("Enter the number\n");
  scanf("%d", &iValue);
  
  iRet = Count(iValue);
  
  printf("%d", iRet);

return 0;
}
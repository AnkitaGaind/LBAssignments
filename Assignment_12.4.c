/*Write a program which accept number from user and return Multiplication of all the digits.

Input : 2395
Output : 270

Input : 1018
Output : 8

Input : 9440
Output : 144

Input : 922432
Output : 864

*/

#include<stdio.h>

int MulDigits(int iNo)
{
	int iDigit = 0;
	int iMul = 1;
	 
	 if(iNo < 0)
	 {
		 iNo = -iNo;
	 }
	 
	while(iNo > 0)
	{  iDigit = iNo%10;
     
	   if(iDigit != 0)
	 { 
       iMul = iMul * iDigit;
	 }
	   iNo = iNo/10;
	}
	
	return iMul;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d", &iValue);
	
	iRet = MulDigits(iValue);
	
	printf("%d\n", iRet);
	
	return 0;
}
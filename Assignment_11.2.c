/*Write a program which accept number from user and and check whether it contains 0 in it or not.

Input : 2395
Output : There is  no Zero

Input : 1018
Output : It contains zero

Input : 9000
Output : It contains Zero

Input : 10687
Output : It contains zero

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
  int iDigit = 0;
 
   while(iNo > 0)
   {  
	   iDigit = iNo % 10;
	    if(iDigit == 0)
	   {
		  return 1 ; 
		  
	   }
	   else
	   {
		   return 0;
	   }
	   iNo = iNo/10;
   }
     
}

int main()
{ 
  int iValue = 0;
  BOOL bRet = FALSE;
  
  printf("Enter number\n");
  scanf("%d", &iValue);
  
  bRet = ChkZero(iValue);
  
  if(bRet == TRUE)
  {
      printf("It contains zero");
  }
  else
  {
     printf("There is no zero");
  }


return 0;
}
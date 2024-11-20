/*Write a program which accepts one number from user and print that number of even numbers on screen

Input : 7

Output : 2 4 6 8 10 12 14

*/

#include<stdio.h>
int PrintEven(int iNo)
{
  if(iNo<=0)
  { 
     iNo = -iNo;
  }
  else
  {
     int iCnt = 0;
     
	for(iCnt=0; iCnt<iNo; iCnt++)	
	{
	  printf("%d\t",2*(iCnt+1));
	}
	 
  }	
}
int main()
{
  int iValue = 0;
  
  printf("Enter number\n");
  
  scanf("%d",&iValue);
  
  PrintEven(iValue);
  
  return 0;
}
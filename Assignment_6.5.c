/*write a program which accept number and display its table in reverse order.

Input: 2
Output : 20 18 16 14 12 10 8 6 4 2

*/

#include<stdio.h>

void Table(int iNo)
{   
  if(iNo<0)
 {
 iNo = -iNo;
 }  
 
 int iCnt = 0;
 int itable = 0;
  
 for(iCnt=10; iCnt>=1; iCnt--)
 {
   itable = iCnt*iNo;
   printf("%d\t", itable);
 }
}

int main() 
{
  int iValue = 0; 
  
  printf("Enter number\n");
  scanf("%d", &iValue);
  
  Table(iValue);
  
  return 0;
}
/*Write a program which accepts area in square feet 
and convert it into square meter. (1 square feet = 0.0929 Square meter)

Input : 5
Output : 0.0464515

Input : 7
Output : 0.650321

*/
#include<stdio.h>

double SquareMeter(int iValue)
{
 double dResult = 0.0;
 
 dResult = iValue * 0.0929;
 
 return dResult;
}

int main()
{
  int iValue = 0;
  double dRet = 0.0;
  
  printf("Enter area in square feet\n");
  scanf("%d",&iValue);
  
  dRet = SquareMeter(iValue);
  
  printf("The area in square meter is : %lf\n", dRet);

return 0;
}
/*Accept Character from user and check whether it is digit or not.
(0-9)

Input : 7
Output : TRUE

Input : d
Output : FALSE

*/

#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(int iNo)
{
	bool bFlag = false;
	
	if(iNo >= '0' && iNo <= '9')
	{
		bFlag = true;
	}
	return bFlag;
}
int main()
{ 
  int iValue = 0;
  bool bRet = false;
  
  printf("Enter the character : \n");
  scanf("%c", &iValue);
  
  bRet = ChkDigit(iValue);
  
  if(bRet == true)
  {
     printf("It is Digit");
  }
  else
  {
    printf("It is not a Digit");
  }

return 0;
}
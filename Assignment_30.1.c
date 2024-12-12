/*Accept Character from user and check whether it is alphabet or not.
(A-Z a-z)

Input : F
Output : TRUE

Input : &
Output : FALSE

*/

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
	bool bFlag = false;
	
	if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
	{
		bFlag = true;
	}
	return bFlag;
}
int main()
{ 
  char cValue = '\0';
  bool bRet = false;
  
  printf("Enter the character : \n");
  scanf("%c", &cValue);
  
  bRet = ChkAlpha(cValue);
  
  if(bRet == true)
  {
     printf("It is character");
  }
  else
  {
    printf("It is not a character");
  }

return 0;
}
/*Accept Character from user and check whether it is small case or not.
(a-z)

Input : g
Output : TRUE

Input : D
Output : FALSE

*/

#include<stdio.h>
#include<stdbool.h>
 
 bool ChkSmall(char ch)
 {
	 bool bFlag = false;
	 
	 if(ch >= 'a' && ch <= 'z')
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
  
  bRet = ChkSmall(cValue);
  
  if(bRet == true)
  {
	  printf("It is small case character");
  }
  else
  {
    printf("It is not a small case character");
  }
  
  return 0;
}

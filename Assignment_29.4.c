/*Write a program which accept string from user and accept one character 
and return index of last occurance of that character.

 Input : "Marvellous Multi OS"
          M
 Output : 11
 
 Input : "Marvellous Multi OS"
          W
 Output : -1
 
 Input : "Marvellous Multi OS"
          e
 Output : 4
 
 
*/

#include<stdio.h>


 int LastChar(char *str, char ch)
{  
   int iCnt = 0;
   int iIndex = -1;
   
   while(*str != '\0')
   {
	   if(*str == ch)
	   {   
		  iIndex = iCnt;
	   }
	   str++;
	   iCnt++;
	 
   }
   return iIndex;
}

int main()
{
 
 char arr[20];
 char cValue = '\0';
 int iRet = 0;
 
 printf("Enter String : \n");
 scanf("%[^'\n']s", arr);
 
 printf("Enter character to search : \n");
 scanf(" %c", &cValue);
 
 iRet = LastChar(arr, cValue);
 
 printf("Character location is : %d", iRet);
 
return 0;
}

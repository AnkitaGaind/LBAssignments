/*Write a program which accept string from user and accept one character 
and return the frequency of that character.

 Input : "Marvellous Multi OS"
          M
 Output : 2
 
 Input : "Marvellous Multi OS"
          W
 Output : 0
*/

#include<stdio.h>


 int CountChar(char *str, char ch)
{  
   int iCnt = 0;
   
   while(*str != '\0')
   {
	   if(*str == ch)
	   {
		   iCnt++;
	   }
	   str++;
   }
   return iCnt;
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
 
 iRet = CountChar(arr, cValue);
 
 printf("Character frequency is : %d", iRet);
 
return 0;
}

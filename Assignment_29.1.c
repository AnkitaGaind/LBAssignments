/*Write a program which accept string from user and accept one character 
and check whether that character is present in the string or not.
 
 Input : "Marvellous Multi OS"
          e
 Output : TRUE
 
 Input : "Marvellous Multi OS"
          W
 Output : FALSE
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkChar(char *str, char ch)
{  
   BOOL bFlag = FALSE;
   
   while(*str != '\0')
   {
	   if(*str == ch)
	   {
		   bFlag = TRUE;
		   break;
	   }
	   str++;
   }
   return bFlag;
}

int main()
{
 
 char arr[20];
 char cValue = '\0';
 BOOL bRet = FALSE;
 
 printf("Enter String : \n");
 scanf("%[^'\n']s", arr);
 
 printf("Enter character to search : \n");
 scanf(" %c", &cValue);
 
 bRet = ChkChar(arr, cValue);
 
 if(bRet == TRUE)
 {
   printf("Character found");
 }
 else
 {
   printf("Character not found");
 }
 
return 0;
}

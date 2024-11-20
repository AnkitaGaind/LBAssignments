/*Accept one character from user and check whether that character is vowel (a, e, i, o, u)or not.

Input : E    Output : TRUE

Input : d    Outpur : FALSE
*/

#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

int checkVowel(char CValue)
{
if (CValue =='a' || CValue =='e' ||CValue =='i' || CValue =='o' ||CValue =='u'
 || CValue =='A' ||CValue =='E' || CValue =='I' ||CValue =='O' || CValue =='U' )
{
  return 1;
}
else
{
return 0;
}
}

int main()
{
char cValue = '\0';
BOOL bRet = FALSE;

printf("Enter character\n");
scanf("%c",&cValue);

bRet = checkVowel(cValue);

if(bRet == 1)
{
    printf("It is Vowel");
}
else
{
    printf("It is not Vowel");
}

return 0;

}
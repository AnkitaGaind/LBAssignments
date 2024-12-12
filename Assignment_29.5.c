/*Write a program which accept string from user and reverse that string in place.

 Input : "abcd"
          
 Output : "dcba"
 
 Input : "abba"
          
 Output : "abba"
 
 
*/

#include<stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;

    char temp = '\0';

    while(*end!= '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("String after reversal : %s\n",Arr);

    return 0;
}

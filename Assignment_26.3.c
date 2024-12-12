/*Accept character from user. If the character is capital then display all the characters from input character
till Z. If input character is small then display all cha characters in reverse order till a.
In other cases return directly.

Input : Q
Output : Q R S T U V W X Y Z

Input : m
Output : m l k j i h g f e d c b a

Input : 8
Output :

*/

#include<stdio.h>

void Display(char ch)
{   
    
	if(ch >= 'A' && ch <= 'Z')
	{   
       int iCnt = 0;
	   for( iCnt = ch; iCnt <= 'Z'; iCnt++)
	   {
		   printf("%c\t", ch);
		   ch++;
	   }
        
    }
	else if(ch >= 'a' && ch <= 'z')
	{
		int iCnt = 0;
		for(iCnt = ch; iCnt >= 'a'; iCnt--)
		{
			printf("%c\t", ch);
			ch--;
		}
	}
	else
	{
		printf("%c", ch);
	}
	
	
}


int main()
{
	char cValue = '\0';
	
	printf("Enter the character : ");
	scanf("%c", &cValue);
	
	Display(cValue);
	
	return 0;
}

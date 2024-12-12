/* Write a program which accept string from user and display it in reverse order.
 Input : "Marvellous"
 
 Output : "SuollevraM"

*/

#include<stdio.h>
#include<string.h>

  void Reverse(char *str)
  {
     char *p = str;

     while(*p != '\0')
     {
      p++;
     }
     p--;

     while(p >= str)
     {
      printf("%c\n", *p);
      p--;
     }
	
  }
  
  int main()

{
  char arr[20];
  int iRet = 0;
  
  printf("Enter string\n");
  scanf("%[^'\n']s", arr);
  
  Reverse(arr);
  
return 0;
}
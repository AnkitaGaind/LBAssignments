/*Accept division of student from user and depends on the division display exam timing.
There are 4 divisions in school as A,B,C,D. Exam of division A t 7 AM, B at 8.30 AM, C at 9.20 AM,
and D at 10.30 AM. (Application should be case insensitive)

Input : C
Output : Your exam is at 9.20 AM.

Input : d
Output : Your exam is at 10.30 AM.

*/

#include<stdio.h>
 
 void DisplaySchedule(char chDiv)
 {
	 
	 if(chDiv == 'a' || chDiv == 'A')
	 {
		printf("Your exam is at 7 AM"); 
	 }
	 else if(chDiv == 'b' || chDiv == 'B')
     {
		printf("Your exam is at 8.30 AM"); 
	 }
	 else if(chDiv == 'c' || chDiv == 'C')	 
	 {
		 printf("Your exam is at 9.20 AM"); 
	 }
	 else if(chDiv == 'd' || chDiv == 'D')
	 {
		  printf("Your exam is at 10.30 AM");
	 }
		 
 }
 
int main()
{ 
  char cValue = '\0';
  
  printf("Enter your division: \n");
  scanf("%c", &cValue);
  
  DisplaySchedule(cValue);
  
  return 0;
}

/*Accept number of rows and number of columns form user and 
display below pattern.

Input : iRow = 4  iCol = 4

Output : 1 1 1 1
         2 2 2 2 
         3 3 3 3 
         4 4 4 4

*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;

   for(i = 1; i <= iRow; i++)
   {
     for(j = 1; j <= iCol; j++)
    {
       printf("%d\t", i);
    }
	printf("\n");
  }
  
}

int main()
{
int iValue1 = 0, iValue2 = 0;

printf("Enter the number of rows and columns : \n");
scanf("%d %d", &iValue1, &iValue2);

Pattern(iValue1, iValue2);

return 0;
}
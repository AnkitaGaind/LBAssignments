/*Accept number of rows and number of columns form user and 
display below pattern.

Input : iRow = 4 iCol = 4

Output :  * * * #
          * * # @
          * # @ @
          # @ @ @
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
 {
    int i = 0, j = 0;

    for(i = iRow; i>=1; i--)
    { 

        for (int j = 1; j <= iCol; j++) 
        {  
            if( i == j)
            {
                printf("#\t");
            }
            else if( i < j)
            {
                printf("@\t");
            }
            else
            {
               printf("*\t");
            }
        }
           
        printf("\n");
    }
 }

int main()
{  

    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d", &iValue1);

    printf("Enter number of columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
/*Write a program which displays ACSII table. Table contains symbol, Decimal, Hexadecimal, 
and Octal representation of every number from 0 - 255.

*/

#include<stdio.h>

void DisplayASCII()
{
	printf("ASCII Table (0 to 255)\n");
    printf("------------------------------------------------------------\n");
    printf("Symbol  | Decimal | Hexadecimal | Octal\n");
    printf("------------------------------------------------------------\n");
   
    for (int i = 0; i <= 255; i++)
    {
        // Print the symbol, decimal, hexadecimal, and octal representations
        printf("   %c    |   %3d   |     %02X     |   %03o\n", i, i, i, i);
    }

}

   int main()
  {
	DisplayASCII();
	
	return 0;
  }
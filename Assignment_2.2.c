//Accept a number from user and print that number of star on screen .

#include<stdio.h>

void Display(int iNo)
{

if(iNo < 0)
 {
    iNo = -iNo;
 }
 
int iCnt = 0;

while(iCnt < iNo)
{
printf(" * ");
iNo--;
}
}

int main()
{
int iValue = 0;

printf("Enter Number : \n");
scanf("%d",&iValue);

Display(iValue);

return 0;
}
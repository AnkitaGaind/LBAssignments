#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
if (iNo % 2 == 0)
{
    printf("The Number is Even");
}
else
{
    printf("The Number is Odd");
} 

}

int main()
{

    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n"); 
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    printf("Given number is : \n", bRet);

    return 0;
}
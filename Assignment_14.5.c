/*Accept N numbers from user and and accept one number as NO, return frequency of NO from it.

Input : N: 6
        NO: 66
        Elements: 85 66 3 66 93 88
Output : 2

Input : N: 6
        NO: 12
        Elements: 85 11 3 15 11 111
Output : 0

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
	
	int iCnt = 0, iCount = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iCount++;
		}
		
	}
	
	return iCount;
}

int main()
{   
	int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
	int *p = NULL;
	
	printf("Enter no of elements : ");
	scanf("%d", &iSize);
	
	printf("Enter the number : ");
	scanf("%d", &iValue);
	
	p = (int*)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate the memory");
		return -1;
	}
	
	printf("Enter %d elements : \n", iSize);
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter element %d :", iCnt+1);
		scanf("%d", &p[iCnt]);
	}
	
	iRet = Frequency(p, iSize, iValue);
	
	printf("Result is : %d", iRet);
	
	free(p);
	
	return 0;
}
/*Accept N numbers from user and return difference between frequency of even numbers
and frequency of odd numbers.

Input : N: 7
        Elements: 85 66 3 80 93 88 90
Output : 1 (4-3)

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	
	int iCnt = 0, iEven = 0, iOdd = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] % 2 == 0)
		{
			iEven++;
		}
		else
		{
			iOdd++;
		}
	}
	
	return iEven - iOdd;
}

int main()
{   
	int iSize = 0, iRet = 0, iCnt = 0;
	int *p = NULL;
	
	printf("Enter no of elements : ");
	scanf("%d", &iSize);
	
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
	
	iRet = Frequency(p, iSize);
	
	printf("Result is : %d", iRet);
	
	free(p);
	
	return 0;
}
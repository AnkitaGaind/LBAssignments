/*Accept N numbers from user and return frequency of 11 from it

Input : N: 6
        Elements: 85 66 3 15 93 88
Output : 0

Input : N: 6
        Elements: 85 11 3 15 11 111
Output : 2

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	
	int iCnt = 0, iCount = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == 11)
		{
			iCount++;
		}
		
	}
	
	return iCount;
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
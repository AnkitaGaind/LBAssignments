/*Accept N numbers from user and return product of all
odd elements.

Input : N: 6
        Elements: 15 66 3 70 10 88
Output : 45

Input : N: 6
        Elements: 44 66 72 70 10 88
Output : 0

*/

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
	
	int iCnt = 0, iProd = 1, foundOdd = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{   


		if(Arr[iCnt] % 2 != 0)
		{   
            
			iProd = iProd * Arr[iCnt];
		    foundOdd = 1;
		}

    }

    if(foundOdd == 0)
        {
            return 0;
        }
        
	return iProd;
}

int main()
{   
	int iSize = 0, iCnt = 0, iRet = 0;
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
	
	iRet = Product(p, iSize);

    printf(" Product of odd elements is : %d", iRet);
	
	free(p);
	
	return 0;
}
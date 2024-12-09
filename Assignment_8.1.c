/*Write a program which accepts radius of a circle and calculates its area.
Conside value of PI as 3.14. (Area = PI * Radius * Radius)

Input : 5.3
Output : 88.2026
*/
# include <stdio.h>

double CircleArea(float fRadius)
{
double dResult = 0.0;

dResult = 3.14 * fRadius * fRadius;

return dResult;
}

int main()
{
float fValue = 0.0f;
double dRet =0.0;

printf("Enter radius\n");
scanf("%f",&fValue);

dRet = CircleArea(fValue);

printf("The Area of Circle is : %f", dRet);
return 0;
}
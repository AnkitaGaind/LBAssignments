/*Write a program which accept temperature into fahrenheit
and convert it into celcius. (1 Celsius = (Fahrenheit - 32)*(5/9))

Input : 10
Output : -12.2222 (10 -32) * (5/9)

*/
#include<stdio.h>

double FhtoCs(float fTemp)
{ 
  double dResult = 0.0;
  dResult = ((fTemp - 32.0) * (5.0/9.0));
  return dResult;
  
}

int main()
{
float fValue = 0.0;
double dRet = 0.0;

printf("Enter temperature in Fahrenheit\n");
scanf("%d",&fValue);

dRet = FhtoCs(fValue);

printf("The temperature in Celsius is : %0.2f", dRet);

return 0;
}
#include<stdio.h>

int main()
{
  printf("\t TEMPERATURE UNIT CONVERTOR \n");
  float ctemp=0.0;
  float ftemp=0.0;
  printf("\nEnter Temperature in Celsius: ");
  scanf("%f", &ctemp);
  ftemp = (ctemp * 9.0/5.0)	+ 32;
  printf("The Temperature In Fahrenheit is %.2f",ftemp);
  printf("\nEnter Temperature in Fahrenheit: ");
  scanf("%f", &ftemp);
  ctemp = (ftemp - 32)	* (5.0/9.0);
  printf("The Temperature In Fahrenheit is %.2f",ctemp);	
	
	
	return 0;
}

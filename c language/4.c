// write a C program to convert temperature from degree Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
	float c,f;
	printf("enter c:");
	scanf("%f",&c);
	f=(c*1.8+32);
	printf("f is %f",f);
	                      //f=c*9/5+32
}

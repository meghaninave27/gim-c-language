//Write a program in C to check whether a number is an even number or not using user Defined Function.
#include<stdio.h>
#include<conio.h>
int main()
{
	even();
}
int even()
{
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	if(a%2==0)
	{
		printf("a is even");
	}
	else
	{
			printf("a is not even");
	}
	
}

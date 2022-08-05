#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("\n Enter the number : ");
	scanf("%d",&n);
	printf("\n Factorial of %d is : %d",n,fact(n));
}
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

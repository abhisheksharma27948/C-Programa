#include<stdio.h>
int main()
{
	int r,w=1,b,sum=0;
	
	printf("\n Enter the Binary number : ");
	scanf("%d",&b);
	
	while(b!=0)
	{
		r=b%10;
		sum=sum+r*w;
		b=b/10;
		w=w*2;
	}
	printf("\n Binary to Decimal : %d",sum);
	return 0;
}

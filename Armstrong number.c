#include<stdio.h>
int main()
{
	int temp,no,sum,r;
	
//	printf("Enter the number : ");
//	scanf("%d",&no);
	
	for(no=1;no<=1000;no=temp+1)
	{
		temp=no;
		sum=0;
		while(no>0)
		{
			r=no%10;
			sum=sum+(r*r*r);
			no=no/10;
		}
		if(temp==sum)
		{
			printf("\n %d ia an armstrong number :",temp);
		}
//		else
//		{
//			printf("\n %d ia Not an armstrong number :",temp);	
//		}	
	
	}
	 return 0;
	
}

#include<stdio.h>
int main()
{
	int r,c,N=5,k=1;
	
	for(r=1;r<=N;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf(" %d",k);
			k++;
		}
		printf("\n");
	}
	
	return 0;
}

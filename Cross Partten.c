#include<stdio.h>
int main()
{
	int r,c,N=10;
	
	for(r=0;r<N;r++)
	{
		for(c=0;c<N;c++)
		{
			if(r==0 || r==N-1 || c==0 || c==N-1 || r==c || r+c==N-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");	
	}
	
	return 0;
} 

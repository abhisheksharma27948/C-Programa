// Array of String
#include<stdio.h>
#define No 4
#define Len 10
int main()
{
	// Name [no of string][Length of string]
	char name[No][Len]; // 4 String Length Max 10 for every string
	int pos,i;
	// Getting Name from User
	for(i=0;i<No;i++)
	{
		printf("\n Enter the name of student - %d : ",i+1);
		scanf("%s",name[i]);
		fflush(stdin);
	}
	// Printing the Name
	for(i=0;i<No;i++)
	{
		printf("\n Student - %d Name is : %s ",i+1,name[i]);
	}
	return 0;
}

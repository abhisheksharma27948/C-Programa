#include<stdio.h>
#include<string.h>
int main()
{
	char *first;
	int flen=0;
	first=(char*)malloc(sizeof(char)*1);
	printf("\n Enter the string : ");
	scanf("%[^\n]s",first);
	first[4]='\0';
	printf("\nString = %s",first);
	printf("\nSecond String = %s",first+5);
	
	return 0;
}

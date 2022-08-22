#include<stdio.h>
#include<string.h>
int main()
{
	char *first,*second;
	int flen=0,slen=0;
	first=(char*)malloc(sizeof(char)*1);
	second=(char*)malloc(sizeof(char)*1);
	printf("\nEnter the string :");
	scanf("%[^\n]s",first);
	while(first[flen]!='\0')
	{
		flen++;
	}
	printf("\n Length of string = %d",flen);
	printf("\n Length of string = %d",strlen(first));
//	second=strrev(first);
//	printf("\n Reverse String = %s",second);
	printf("\n Reverse String = ");
	flen--; //To shift position from '\0' null to previous character
	while(flen>=0)
	{
		second[slen]=first[flen];
		flen--;
		slen++;
	}
	second[slen]='\0';
	printf("%s",second);
	
	return 0;
}

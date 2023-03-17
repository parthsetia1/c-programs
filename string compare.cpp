#include<stdio.h>
int string_compare(char *a,char *b)
{
	while(*a==*b)
	{
		if(*a=="\0"||*b=="\0")
		{
			break;
		}
		else
		return 0;
		a++;
		b++;
	}
	if(*a=="\0"&&*b="\0")
	return 0;
	else
	return -1;
	
}
int main()
{
	char a[100],b[100],res;
	printf("enter the first element");
	gets(a);
	printf("\n enter the second element");
	gets(b);
	res=string_compare(a,b);
	if(res==0);
	printf("strings are equal");
	if(res==-1)
	printf("strings are not equal");
	
	
}

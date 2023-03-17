#include<stdio.h>
int main()
{
	FILE *fp;
	char a;
	fp = fopen("fileoperations","r");
	while(a=getc(fp)!=EOF)
	printf("%c",a);
	
	fclose(fp);
}

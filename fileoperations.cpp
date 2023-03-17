#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	char s[100];
	fp1=fopen("input.txt","w");
	fp2=fopen("output.txt","r");
	while(gets(s,fp1)!=EOF)
	{
		fprintf(fp1,"%s",s);
		printf("%s",s);
	}
	fclose(fp1);
	fclose(fp2);
}

#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	char a[80],c[80];
	int b;
	fp1 = fopen("input.txt","r");
	fp2 = fopen("output1.txt","w");
	if(fp1==NULL)
	{
		printf("file does not exist");
	}
	while(fscanf(fp1,"%s",a)!=EOF)
	{
		printf("%s",a);
		fprintf(fp2,"%s",a);
	}
	
	
}

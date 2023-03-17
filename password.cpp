#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char password[100]="hello",a[100];
	int i;
	a=getch();
	while(1)
	{
		if(a[i]!="\r")
		{
			printf("*");
			i++
		}
		else
		{
			break;
		}
	}
	if(strcmp(password,a)=0)
	{
		printf("password is correct");
	}
	else
	{
		printf("password is incorrect");
	}
}

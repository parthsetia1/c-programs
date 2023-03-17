#include<stdio.h>

union employee
{
	char name[20];
	int salary;
}u1;
int main()
{
	int i;
	printf("which one you want to choose:");
	scanf("%d",&i);
	if(i==1)
	{
		scanf("%s",&u1.name);
		printf("%s",u1.name);
	}
	else if(i==2)
	{
		scanf("%d",&u1.salary);
		printf("%d",u1.salary);
	}
	else
	{
		printf("invalid");
	}
	printf("\nsize of employee union is %d",sizeof(u1));
}




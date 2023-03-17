#include<stdio.h>
struct student
{
	int stnum;
	char name[100];
	char regcourse[100];
	int noofcredits=0;
}s1;
void get(struct student a)
{
	int i=1;
	printf("enter the students number:");
	scanf("%d",&a.stnum);
	
	printf("enter the name of student:");
	scanf("%s",&a.name);
	printf(" enter the registered course:");
	scanf("%s",&a.regcourse[100]);
	printf("student number is:");
	printf("%d",a.stnum);
	printf("\nstudent name is:");
	printf(" %s",a.name);
	
	printf("\nregistered couse is:");
    printf(" %s",a.regcourse[100]);
	a.noofcredits+=4;
	printf("\ncredits are:%d",a.noofcredits);	
	i+=1;
}


int main()
{
	get(s1);
}

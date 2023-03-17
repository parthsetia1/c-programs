#include<stdio.h>
#include<unistd.h>
int main()
{
	int pid=fork();
	printf("child process pid is %d",getpid());
	printf("parent process pid is %d",getppid());
	
	
}

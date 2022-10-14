#include<stdio.h>
#include<systype.h>
#include<unistd.h>
int main()
{
	fork();
	printf("process id:%d\n"getppid());
	printf("parent process id:%d\n",getppid());
	return 0;
}

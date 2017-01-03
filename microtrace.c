#include <stdio.h>
#include <sys/ptrace.h>
#include <stdlib.h>
#include <sys/wait.h>
// #include <sys/reg.h>
#include <sys/types.h>




int main(int argc, char* argv[])
{
	if(argc < 2)
	{
		printf("enter all arguments. check usage");
		exit(-1);
	}

}
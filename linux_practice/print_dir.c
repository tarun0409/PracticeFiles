#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
int main()
{
	char * cwd = getcwd(NULL,100*sizeof(char));
	printf("\n%s\n",cwd);
	return 0;
}
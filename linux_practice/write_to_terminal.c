#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	if(argc!=2)
	{
		fprintf(stderr,"\nProblem occurred\n");
		exit(1);
	}
	int fd = open(argv[1],1);
	if(fd==-1)
	{
		exit(1);
	}
	char buff[512];
	while(fgets(buff,512,stdin)!=NULL)
	{
		write(fd,buff,strlen(buff));
	}
	close(fd);
	return 0;
}
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
	int fd = open("created_file1",(O_WRONLY | O_CREAT | O_TRUNC),(S_IRUSR | S_IWUSR | S_IXUSR));
	int bw = write(fd,"The contents have been successfully written!",44);
	if(bw>0)
	{
		write(1,"Success",7);
	}
	int cl = close(fd);
	if(cl!=-1)
	{
		write(1,"\nFile closed successfully\n",30);
	}
	exit(0);
}

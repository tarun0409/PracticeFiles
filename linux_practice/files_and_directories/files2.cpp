#include<unistd.h>
#include<stdlib.h>
int main()
{
	char buffer[128];
	int read_len;
	read_len = read(0,buffer,128);
	if(read_len==-1)
	{
		write(2,"\nAn error has occurred\n",27);
	}
	exit(0);
}

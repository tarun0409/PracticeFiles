#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
using namespace std;

int main()
{
	char out_buff[1024];
	int r_fd = open("file1.in",O_RDONLY);
	int w_fd = open("file1.out",(O_WRONLY|O_CREAT),(S_IRUSR | S_IWUSR));
	int r_size = (read(r_fd,out_buff,sizeof(out_buff)));
	while(r_size > 0)
	{
		write(w_fd,out_buff,r_size);
		r_size = (read(r_fd,out_buff,sizeof(out_buff)));
	}
	close(r_fd);
	close(w_fd);
	exit(0);
}
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main()
{
	if(write(1,"Hi this is my first system call!\n",35) != 35)
	{
		write(2,"A write error has occurred on file desc 1\n",46);
	}
	exit(0);
}

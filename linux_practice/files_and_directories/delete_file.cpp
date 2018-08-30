#include<unistd.h>
#include<stdio.h>
int main()
{
	int ret = unlink("file2.out");
	printf("\n\nThe returned value is %d \n\n",ret);
	return 0;
}
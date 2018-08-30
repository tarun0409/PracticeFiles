#include<sys/stat.h>
#include<stdio.h>
int main()
{
	int ret = chmod("file1.in",(S_IRUSR | S_IWUSR | S_IXUSR));
	printf("\n\nThe returned number is %d\n\n",ret);
	return 0;

}
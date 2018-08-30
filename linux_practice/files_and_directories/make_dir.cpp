#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
	int one = mkdir("dir1",(S_IRUSR | S_IWUSR | S_IXUSR | S_IRGRP | S_IWGRP | S_IXGRP));
	int two  = mkdir("dir1/dir2",(S_IRUSR | S_IWUSR | S_IXUSR));
	printf("\n\none is %d two is %d\n\n",one,two);
	return 0;
}
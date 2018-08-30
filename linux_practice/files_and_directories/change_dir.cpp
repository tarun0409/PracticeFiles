#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	char * s = getcwd(NULL,100*sizeof(char));
	printf("\n\n The current working dir is %s\n\n",s);
	int x = chdir("/home/tarunm/Documents/MyPrograms/linux_practice/files_and_directories/dir1");
	printf("\n\nx is %d\n\n",x);
	s = getcwd(NULL,100*sizeof(char));
	printf("\n\n The current working dir is %s\n\n",s);
	x = chdir("/home/tarunm/Documents/MyPrograms/linux_practice/files_and_directories/dir1/dir2");
	printf("\n\nx is %d\n\n",x);
	s = getcwd(NULL,100*sizeof(char));
	printf("\n\n The current working dir is %s\n\n",s);
	return 0;
}
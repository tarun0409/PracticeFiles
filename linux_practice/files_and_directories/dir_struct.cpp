#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<dirent.h>
#include<string.h>

char const * dot = ".";
void printDirStruct(char const * currentDirName)
{
	DIR * currentDir = opendir(currentDirName);
	if(currentDir!=NULL)
	{
			chdir(currentDirName);
			char * s = getcwd(NULL,100*sizeof(char));
			//printf("\nCurrent dir: %s\n",s);
	}
	struct dirent * dirEntry;
	struct stat statbuf;
	while((dirEntry = readdir(currentDir))!=NULL)
	{
		char * dirName = dirEntry->d_name;
		if(!strcmp(dirName,".") || !strcmp(dirName,".."))
		{
			continue;
		}
		lstat(dirName,&statbuf);
		if(S_ISDIR(statbuf.st_mode))
		{
			printf("\n%s\n",dirName);
			printDirStruct(dirName);
		}
	}
	chdir("..");
}

int main()
{
	printDirStruct(dot);
	return 0;
}
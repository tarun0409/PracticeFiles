#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c;
	FILE *in,*out;
	in = fopen("file2.in","r");
	out = fopen("file2.out","w");
	while(!feof(in))
	{
		c = fgetc(in);
		fputc(c,out);
	}
	return 0;
}
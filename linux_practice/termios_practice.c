#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<termios.h>
#include<string.h>
int isArrowKey(char c)
{
	int escape=0,brack=0;
	escape = (c==0x1b);
	brack = (c==0x5b);
	return (escape && brack);
}
int main()
{
	struct termios info;
	tcgetattr(0,&info);
	info.c_lflag = info.c_lflag | ECHO;
	info.c_lflag = (info.c_lflag & ~ICANON);
	tcsetattr(0,TCSANOW,&info);
	char c;
	do
	{
		char c = getchar();
		if (c == '\033') 
		{ // if the first value is esc
			getchar(); // skip the [
			switch(getchar()) 
			{ // the real value
				case 'A':
					printf("\nUp arrow\n");
					break;
				case 'B':
					printf("\nDown arrow\n");
					break;
				case 'C':
					printf("\nRight arrow\n");
					break;
				case 'D':
					printf("\nLeft arrow\n");
					break;
			}
		}
		else
		{
			printf("\n\n%d\n\n",c);
		}
		
	} while(c!='e');
	return 0;
}
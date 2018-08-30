#include<iostream>
#include<unistd.h>
#include<sys/types.h>
using namespace std;
int main()
{
	pid_t p;
	cout<<"\n\nI am being executed by parent"<<endl;
	if((p = fork())==0)
	{
		cout<<"\n\nThis is a child process: "<<p<<endl;
	}
	cout<<"\n\nI am being executed by :"<<p<<endl;
	return 0;
}
#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
	list<int> mylist;
	mylist.push_front(5);
	mylist.push_front(6);
	mylist.push_back(7);
	mylist.push_back(8);
	mylist.push_front(10);
	mylist.push_front(9);
	mylist.push_back(1);
	for(list<int>::iterator itr = mylist.begin(); itr!=mylist.end(); ++itr)
	{
		cout<<*itr<<endl;
	}
	cout<<endl<<endl;
	list<int>::iterator itr1 = mylist.begin();
	++itr1;
	++itr1;
	++itr1;
	list<int> list2;
	list2.splice(list2.begin(),mylist,mylist.begin(),itr1);
	cout<<"\n\n"<<*itr1<<"\n\n";
	for(list<int>::iterator itr = mylist.begin(); itr!=mylist.end(); ++itr)
	{
		cout<<*itr<<endl;
	}
	
	char * tryout = (char *)malloc(10*sizeof(char));
	tryout[0] = 'a';
	tryout[1] = 'b';
	tryout[2] = 'c';
	tryout[3] = '\0';
	cout<<endl<<endl<<tryout<<endl<<endl;
	string j = "xoijfd";
	for(int i = 0; i<j.length(); i++)
	{
		cout<<endl<<j[i]<<endl;
	}
	return 0;
}
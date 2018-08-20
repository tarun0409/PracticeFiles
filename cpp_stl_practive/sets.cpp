#include<iostream>
#include<set>
#include<utility>
using namespace std;
int main()
{
	set<int> myset;
	myset.insert(6);
	myset.insert(7);
	myset.insert(9);
	myset.insert(1);
	myset.insert(3);
	myset.insert(2);
	for(set<int>::iterator it = myset.begin(); it!=myset.end(); ++it)
	{
		cout<<endl<<*it;
	}
	set<int>::iterator fit = myset.find(3);
	cout<<endl<<*fit<<endl;
	fit = myset.find(5);
	if(fit==myset.end())
	{
		cout<<endl<<"Reached end of line";
	}
	pair<set<int>::iterator,bool> ret;
	ret = myset.insert(9);
	cout<<endl<<"First is "<<*(ret.first)<<endl;
	cout<<endl<<"Second is "<<ret.second<<endl;
	return 0;
}

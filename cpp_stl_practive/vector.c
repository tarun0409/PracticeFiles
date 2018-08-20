#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
	vector<int> vec;
	vec.push_back(3);
	vec.push_back(6);
	vec.push_back(9);
	cout<<"\n The size of the vector is "<<vec.size()<<endl;
	for(vector<int>::iterator it = vec.begin(); it!=vec.end(); ++it)
	{
		cout<<*it<<endl;
	}
	if(!vec.empty())
	{
		cout<<"\nVector is not empty\n";
	}
	vector<int> vec2(vec);
	cout<<endl<<vec2[2];
	vec.clear();
	if(vec.empty())
	{
		cout<<"\nVector is empty\n";
	}
	vec2.swap(vec);
	if(vec.empty())
	{
		cout<<"\nVector1 is empty\n";
	}
	if(vec2.empty())
	{
		cout<<"\nVector2 is empty\n";
	}
	return 0;
}

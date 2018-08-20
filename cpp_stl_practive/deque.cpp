#include<iostream>
#include<deque>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
	deque<int> deq;
	deq.push_back(2);
	deq.push_back(3);
	deq.push_back(4);
	deq.push_back(5);
	deq.push_front(100);
	deq.push_front(200);
	deq.push_back(-1000);
	for(deque<int>::iterator itr = deq.begin(); itr!=deq.end(); ++itr)
	{
		cout<<endl<<*itr<<endl;
	}

	deque<int>::iterator itr_temp = find(deq.begin(),deq.end(),100);
	cout<<*itr_temp;
	return 0;
}

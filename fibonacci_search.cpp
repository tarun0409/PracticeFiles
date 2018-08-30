#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int get_next_fib_num(int prev, int current)
{
	return prev+current;
}
int fibonacci_search(vector<int> arr, int value, int l_pos, int r_pos)
{
	int i = 0;
	int j = 1;
	int k = l_pos;
	while((r_pos==-1 || k<=r_pos) && arr[k]<=value)
	{
		if(arr[k] == value)
		{
			return k;
		}
		i = j;
		j = get_next_fib_num(i,j);
		k = k+j;
		if(k>r_pos)
		{
			k = r_pos;
		}
	}
	if(arr[k]>value)
	{
		return fibonacci_search(arr,value,k-j,k); 
	}
	
	return -1;
}
int main()
{
	vector<int> arr;
	arr.push_back(5);
	arr.push_back(3);
	arr.push_back(9);
	arr.push_back(4);
	arr.push_back(2);
	arr.push_back(6);
	arr.push_back(10);
	arr.push_back(12);
	sort(arr.begin(),arr.end());
	cout<<endl<<fibonacci_search(arr,12,0,arr.size()-1)<<endl;
	return 0;
}

#include<iostream>

using namespace std;

template <typename T>

T square(T x)
{
	return x*x;
}

int main()
{
	cout<<"\n"<<square<int>(2)<<endl;
	return 0;
}

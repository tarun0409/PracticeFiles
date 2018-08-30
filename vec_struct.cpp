#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
struct mystruct
{
	int a;
	int b;
};
int main()
{
	vector<struct mystruct *> myvec;
	struct mystruct * s1 = (struct mystruct *)malloc(sizeof(struct mystruct));
	s1->a=1;
	s1->b=2;
	myvec.push_back(s1);
	struct mystruct * s2 = (struct mystruct *)malloc(sizeof(struct mystruct));
	s2->a=1;
	s2->b=2;
	myvec.push_back(s2);
	for(vector<struct mystruct *>::iterator it = myvec.begin(); it!=myvec.end(); ++it)
	{
		cout<<(*it)->a<<endl<<(*it)->b<<endl;
	}
	return 0;
}
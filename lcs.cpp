#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <unordered_set>

using namespace std;

const int rand_prime = 5;



int main() {
    //vector<string> res;
    //res = getRepeated("AAAAAWWWWWAAAAAWWWWWWAAAAAGGGSSS",10);
    //printVec(res);
	vector<string> repeated_strings;
	long long r_value = 0;
	string str;
	cin>>str;
	int len = str.length();
	unordered_set<long long> s1,s2;
	int i=0;
	int s = 0;
	int d = 0;
	while(i<len)
	{
		if(i>=10)
		{
			if(s1.find(r_value)==s1.end())
			{
				s = 1;
			}
			else if(s2.find(r_value) == s2.end())
			{
				d = 1;
			}
			if(s&&!d)
			{
				s1.insert(r_value);
			}
			if(!s&&d)
			{
				string temp_string = "";
				for(int j=(i-10);j<10; j++)
				{
					temp_string+=str[j];
					cout<<temp_string<<endl;
				}
				repeated_strings.push_back(temp_string);
				s2.insert(r_value);
			}
			long long t1 = (long long)str[i-10];
			long long t2 = (long long)str[i];
			long long t3 = (long long)pow(rand_prime,10);
			long long t4 = t3*t1;
			r_value *= rand_prime;
			r_value -= t4;
			r_value += t2;
				
		}
		else
		{
			long long t1 = pow(rand_prime,(9-i));
			long long t2 = (long long)str[i];
			long long t3 = t1*t2;
			r_value += t3;
		}
		i++;
	}
	if(s1.find(r_value)==s1.end())
	{
		s = 1;
	}
	else if(s2.find(r_value) == s2.end())
	{
		d = 1;
	}
	if(!s && d)
	{
		string temp_string = "";
		for(int j=(len-10);j<10; j++)
		{
			temp_string+=str[j];

		}
		cout<<temp_string<<endl;
		repeated_strings.push_back(temp_string);
	}
	cout<<endl<<endl<<repeated_strings.size()<<endl<<endl;
	for(int i=0; i<repeated_strings.size(); i++)
	{
		cout<<repeated_strings[i]<<" ";
	}
	
	return 0;
    
}
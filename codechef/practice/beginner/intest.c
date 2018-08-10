#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,k,count =0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(int i=0; i<n; i++)
	{
		int num;
		scanf("%d",&num);
		if(num%k==0)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}

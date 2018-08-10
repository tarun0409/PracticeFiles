#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++)
	{
		int n,num=0;
		scanf("%d",&n);
		while(n>0)
		{
			int k = n%10;
			num = (num*10)+k;
			n = n/10;
		}
		printf("%d",num);
		if(i!=t-1)
		{
			printf("\n");
		}
	}
	return 0;
}

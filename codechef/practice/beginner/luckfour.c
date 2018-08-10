#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++)
	{
		int n,count=0;
		scanf("%d",&n);
		while(n>0)
		{
			if(n%10==4)
			{
				count++;
			}
			n=n/10;
		}
		printf("%d",count);
		if(t!=1)
		{
			printf("\n");
		}
	}
}

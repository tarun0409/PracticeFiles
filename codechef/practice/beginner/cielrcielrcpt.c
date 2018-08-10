#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		int p,count=0,k=2048;
		scanf("%d",&p);
		while(p>0)
		{
			while(p>=k)
			{
				p = p-k;
				count++;
			}
			k=k/2;
		}
		printf("%d",count);
		if(i!=n-1)
		{
			printf("\n");
		}
	}
	return 0;
}

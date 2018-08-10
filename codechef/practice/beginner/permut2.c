#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		int * perm = (int *)malloc(n*sizeof(int));
		int * invp = (int *)malloc(n*sizeof(int));
		int a = 1;
		for(int i=0; i<n; i++)
		{
			scanf("%d",&perm[i]);
			invp[perm[i]-1] = i+1;
		}
		for(int i=0; i<n; i++)
		{
			if(perm[i]!=invp[i])
			{
				a=0;
				break;
			}
		}
		printf((a?"ambigious\n":"not ambiguous\n"));
		scanf("%d",&n);
		
	}
	return 0;
}

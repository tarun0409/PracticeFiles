#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		int num;
		scanf("%d",&num);
		printf("%d",((num/2)+1));
		if(i!=n-1)
		{
			printf("\n");
		}
	}
}

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		int num,sum=0;
		scanf("%d",&num);
		while(num>0)
		{
			sum+=(num%10);
			num = num/10;
		}
		printf("%d",sum);
		if(i!=n-1)
		{
			printf("\n");
		}
	}
	return 0;
}

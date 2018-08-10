#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++)
	{
		int num,sum=0,first=1;
		scanf("%d",&num);
		while(num>0)
		{
			if(num<10)
			{
				sum+=num;
				break;
			}
			if(first)
			{
				first = 0;
				sum+=(num%10);
			}
			num = num/10;
		}
		printf("%d",sum);
		if(i!=t-1)
		{
			printf("\n");
		}
	}
}

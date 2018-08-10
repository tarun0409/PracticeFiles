#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++)
	{
		int s1,s2,min,max;
		scanf("%d %d",&s1,&s2);
		max = s1+s2;
		if(s1>=s2)
		{
			min = s1;
		}
		else
		{
			min = s2;
		}
		printf("%d %d",min,max);
		if(i!=t-1)
		{
			printf("\n");
		}
	}
	return 0;
}

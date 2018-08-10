#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++)
	{
		int n,s;
		scanf("%d",&n);
		s = (int)sqrt((float)n);
		printf("%d",s);
		if(i!=t-1)
		{
			printf("\n");
		}
	}
	return 0;
}

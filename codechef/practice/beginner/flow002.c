#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		int num1,num2;
		scanf("%d %d",&num1,&num2);
		printf("%d",num1%num2);
		if(i!=n-1)
		{
			printf("\n");
		}
	}
	return 0;
}

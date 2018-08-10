#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,p_n,negs;
	printf("\nEnter the number of variables: ");
	scanf("%d",&n);
	int * w = (int *)malloc(n*sizeof(int));
	printf("\n Enter the weight vector in %d space separated integers: ",n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&w[i]);
	}
	printf("\nEnter the number of points: ");
	scanf("%d",&p_n);
	int ** p = (int **)malloc(p_n*sizeof(int *));
	int * pos_neg = (int *)malloc(p_n*sizeof(int *));
	printf("\nEnter the number of negative points: ");
	scanf("%d",&negs);
	for(int i=0; i<p_n; i++)
	{
		if(i<negs)
		{
			pos_neg[i] = 1;
		}
		else
		{
			pos_neg[i] = 0;
		}
		p[i] = (int *)malloc(n*sizeof(int));
	}
	printf("\nEnter the points in %d space separated integers",n);
	int i=0;
	for( ; i<negs; i++)
	{
		printf("\nEnter the negative point %d : ",(i+1));
		for(int j=0; j<n; j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	for( ; i<p_n; i++)
	{
		printf("\nEnter the positive point %d : ",(i-negs+1));
		for(int j=0; j<n; j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	
	int converge = 0;
	printf("\n\n Weight vector before learning: \n");
	for(int k=0; k<n; k++)
	{
		printf("%d ",w[k]);
	}
	while(!converge)
	{
		converge = 1;
		for(i=0; i<p_n; i++)
		{
			int val = 0;
			for(int j=0; j<n; j++)
			{
				val+=p[i][j]*w[j];
			}
			if((!pos_neg[i]) && val<0)
			{
				converge = 0;
				for(int j=0; j<n; j++)
				{
					w[j]+=p[i][j];
				}
			}
			else if((pos_neg[i]) && val>=0)
			{
				converge = 0;
				for(int j=0; j<n; j++)
				{
					w[j]-=p[i][j];
				}
			}
		}
	}
	
	printf("\n\nWeight vector after learning: \n");

	for(int k=0; k<n; k++)
	{
		printf("%d ",w[k]);
	}
	return 0;
}

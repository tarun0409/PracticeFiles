#include<stdio.h>
int main()
{
	int n, current_lead=-1, current_winner = 1,p1score =0,p2score=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		int s1,s2,lead;
		scanf("%d %d",&s1,&s2);
		p1score+=s1;
		p2score+=s2;
		lead = p1score-p2score;
		if(lead>0 && lead>current_lead)
		{
			current_lead = lead;
			current_winner = 1;
		}
		else if(lead<0 && (-1*lead)>current_lead)
		{
			current_lead = (-1*lead);
			current_winner = 2;
		}
	}
	printf("%d %d",current_winner,current_lead);
	return 0;
}

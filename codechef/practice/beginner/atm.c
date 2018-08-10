#include<stdio.h>
int main()
{
	int w_amt = 0;
	float s_amt = 0.0f;
	scanf("%d",&w_amt);
	scanf("%f",&s_amt);
	if(w_amt%5!=0 || s_amt<(w_amt+0.5))
	{
		printf("%0.2f",s_amt);
	}
	else
	{
		printf("%0.2f",s_amt-w_amt-(0.5));
	}
	
	return 0;
}

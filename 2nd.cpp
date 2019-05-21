#include<stdio.h>
int main()
{
	int count=0,n,i,t=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=t*i;
	}
	for(i=5;n/i>=1;i=i*5)
	{
		count+=n/i;
	}
	printf("%d %d",count,t);
}

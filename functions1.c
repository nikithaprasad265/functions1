#include<stdio.h>
void main()
{
	int n, sum,m;
	
	printf("Enter the digits\n");
	scanf("%d",&n);
	
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	
	printf("sum=%d",sum);

}

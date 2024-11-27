#include<stdio.h>
int main()
{
	int a1=0,a2=1,n,s;
	printf("Enter n;");
	scanf("%d",&n);
	printf("Fibonacci Series:");
	for(int i=1;i<=n;i++)
	{
	    printf(" %d",a1);
		s=a1+a2;
		a1=a2;
		a2=s;
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int n,p=1;
	printf("Enter n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	p*=i;
	printf("The factorial of a number is %d",p);
	return 0;	
}
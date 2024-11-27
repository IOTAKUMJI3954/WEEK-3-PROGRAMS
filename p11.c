#include<stdio.h>
int main()
{
	int n,a,s=0,a;
	printf("Enter n:");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		a=n%10;
		n/=10;
		s=s*10+a;
	}
	if(s==a)
	printf("The number is a palindrome number");
	else
	printf("The number is not a palindrome number");
	return 0;	
}
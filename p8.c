#include<stdio.h>
int main()
{
	int n,c=0;
	printf("Enter n:");
	scanf("%d",&n);
	while(n!=0){
	n/=10;
    c++;}
	printf("The length of the number is %d",c);
	return 0;	
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,i,c,p,d,t;
	for(i=1;i<=10;i++)
	{
		printf("What's the value of\n");
		a=(rand()%9)+1;
		b=(rand()%9)+1;
		c=(rand()%4)+1;
		d=(rand()%4)+1;
		if(c==1)
		{
			printf("%d+%d=",a,b);
			scanf("%d",&t);
			if(t==a+b)
			{
				if(d==1)
				printf("TRUE\n");
				else if(d==2)
				printf("GOOD\n");
				else if(d==3)
				printf("VERY GOOD\n");
				else
				printf("EXCELLENT\n");
		    }
		    else
		    {
		    	while(t!=a+b)
		    	{	    		
		    	if(d==1)
				printf("BAD\n");
				else if(d==2)
				printf("WRONG\n");
				else if(d==3)
				printf("TRY AGAIN\n");
				else
				printf("DONT GIVE UP\n");
				printf("%d+%d=",a,b);
				d=(rand()%4)+1;
				scanf("%d",&t);
				}
				printf("FANTASTIC\n");
			}
		}
			else if(c==2)
		{
			printf("%d-%d=",a,b);
			scanf("%d",&t);
			if(t==a-b)
			{
				if(d==1)
				printf("TRUE\n");
				else if(d==2)
				printf("GOOD\n");
				else if(d==3)
				printf("VERY GOOD\n");
				else
				printf("EXCELLENT\n");
		    }
		    else
		    {
		    	while(t!=a-b)
				{
		    	if(d==1)
				printf("BAD\n");
				else if(d==2)
				printf("WRONG\n");
				else if(d==3)
				printf("TRY AGAIN\n");
				else
				printf("DONT GIVE UP\n");
				printf("%d-%d=",a,b);
				d=(rand()%4)+1;
				scanf("%d",&t);
				}
				printf("FABULOUS\n");
			}
		}
			else if(c==3)
		{
			printf("%d*%d=",a,b);
			scanf("%d",&t);
			if(t==a*b)
			{
				if(d==1)
				printf("TRUE\n");
				else if(d==2)
				printf("GOOD\n");
				else if(d==3)
				printf("VERY GOOD\n");
				else
				printf("EXCELLENT\n");
		    }
		    
		    else
		    {
		    	while(t!=a*b)
			{
		    	if(d==1)
				printf("BAD\n");
				else if(d==2)
				printf("WRONG\n");
				else if(d==3)
				printf("TRY AGAIN\n");
				else
				printf("DONT GIVE UP\n");
				printf("%d*%d=",a,b);
				d=(rand()%4)+1;
				scanf("%d",&t);
			}
			printf("FABULOUS\n");
			}
		}
			else 
		{
			printf("%d/%d=",a,b);
			scanf("%d",&t);
			if(t==a/b)
			{
				if(d==1)
				printf("TRUE\n");
				else if(d==2)
				printf("GOOD\n");
				else if(d==3)
				printf("VERY GOOD\n");
				else
				printf("EXCELLENT\n");
		    }
		    else
		    {
		    	while(t!=a/b)
				{
		    	if(d==1)
				printf("BAD\n");
				else if(d==2)
				printf("WRONG\n");
				else if(d==3)
				printf("TRY AGAIN\n");
				else
				printf("DONT GIVE UP\n");
				printf("%d/%d=",a,b);
				d=(rand()%4)+1;
				scanf("%d",&t);
			}
			printf("VERY GOOD\n");
			}
		}
	}
	return 0;
}
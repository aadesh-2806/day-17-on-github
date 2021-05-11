#include<stdio.h>

void main()
{
	
	int i,a[50][50],r,k,d,t,n,j,l;

	printf("hello\nenter value=");
	scanf("%d",&n);
	
	if(n<=10)
	{
		i=0;
		while(i<=n)
		{
			printf("%d ",i++);		
		}
	}
	else
	{
		i=0;
		while(i<=10)
		{
			printf("%d ",i++);
		}
		i=11;
		while(i<=n)
		{
			l=i%100;
			l=l/10;
			if(i==(i/10)*10+(l-1) || i==(i/10)*10+(l+1))
			{
				printf("%d ",i);
			}
			i++;
		}
	}
	
	getch();
	
}

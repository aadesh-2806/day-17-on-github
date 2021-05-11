#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],b[50],t,j,n,k,x;
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		printf("enter no %d=",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter value k=");
	scanf("%d",&k);

	x=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b[x]=a[j]-a[i];
			if(b[x]<0)
			{
				b[x]=-b[x];
			}
			x++;
		}
	}
	
	for(i=0;i<x;i++)
	{
		for(j=i+1;j<x;j++)
		{
			if(b[i]<b[j])
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	i=0;
	k--;
	for(j=i+1;j<x;j++)
	{
		if(k==0)
		{
			break;
		}
		if(b[i]!=b[j])
		{
			k--;
			i=j;
		}
	}
	printf("%d",b[j]);
	getch();
	
}	

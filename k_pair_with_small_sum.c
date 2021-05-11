#include<stdio.h>

void main()
{
	
	int i,b[100],a[2][50],s,t,k,c[50][2],n,j;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<2)
	{
		j=0;
		while(j<n)
		{
			printf("enter %d,%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
			j++;
		}					
		i++;
	}
	printf("enter number of pairs=");
	scanf("%d",&s);

	j=0;
	t=0;
	while(j<n)
	{
		k=0;
		while(k<n)
		{
			b[t]=a[0][j]+a[1][k];
			c[t][0]=a[0][j];
			c[t++][1]=a[1][k];
			k++;
		}
		j++;
	}	
	j=t;
	t=0;
	while(t<j)
	{
		k=t+1;
		while(k<j)
		{
			if(b[t]>b[k])
			{
				i=b[k];
				b[k]=b[t];
				b[t]=i;
				
				i=c[k][0];
				c[k][0]=c[t][0];
				c[t][0]=i;
				
				i=c[k][1];
				c[k][1]=c[t][1];
				c[t][1]=i;
			}
			k++;
		}
		t++;
	}
	s--;
	while(s>=0)
	{
		printf("[%d+%d=%d] ",c[s][0],c[s][1],b[s]);
		s--;
	}		
	getch();
	
}

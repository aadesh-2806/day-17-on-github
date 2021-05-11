#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,x;

	printf("Welcome\nEnter a value=\n");
	scanf("%d" ,&n);

	x=1;
	while(x<=n)
	{
		i=1;
		while(i<=x)
		{
			printf("%d", i);
			i=i+1;
		}
		printf("\n");
		x=x+1;
	}
	getch();

}

#include<stdio.h>
#include<stdlib.h>

int power(int n);

int main()
{
	int n,i,m,j,k;

	printf("Enter The Number Of Points:\t");
	scanf("%d",&n);
	
	m=power(n);

	for(i=m-1;i>=0;i--)
	{

		for(j=0;j<n;j++)
		{
			k=i>>j & 1;
			if(k == 1)
				printf("%d",j+1);
		}
		printf("\n");
	}
}

int power(int n)
{
	int s=1;

	for(int j=1;j<=n;j++)
		s=s*2;
	
	return s;
		
}

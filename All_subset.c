#include<stdio.h>
#include<stdlib.h>

int power(int n);

int main()
{
	int n,i,m,j,k,*a;

	printf("Enter The Number Of Points:\t");
	scanf("%d",&n);
	
	a=(int *)malloc(n*sizeof(int));
	
	m=power(n);
	for(i=0;i<n;i++)
		a[i]=1;

	for(i=m-1;i>=1;i--)
	{
		for(k=0;k<n;k++)
		{
			if(a[k] == 1)
				printf("%d",k+1);
		}
		printf("\n");

		for(j=n-1;j>=0;j--)
		{
			if(a[j] == 0)
				a[j]=1;
			else
			{
				a[j]=0;
				break;
			}
		}
			
	}
}

int power(int n)
{
	int s=1;

	for(int j=1;j<=n;j++)
		s=s*2;
	
	return s;
		
}

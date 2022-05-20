#include<stdio.h>
int ser(int *a ,int n,int e)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==e)
		return 1;
	}
	return 0;
}
int rep(int *a,int n,int e)
{
	int c=0,i=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==e)
		c++;
	}
	return c;	
}
int ind(int *a ,int n,int e)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==e)
		return i;
	}
}
int main()
{
	int n,i,e;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&e);
	if(ser(a,n,e))
	{
		printf("found\n");
	    printf("count:%d\n",rep(a,n,e));
		printf("ind:%d",ind(a,n,e));
	}
	else
	{
		printf("not found");
	}
}

#include<stdio.h>
int bi_ser(int *a,int e,int p,int q)
{
	int m;
	m=(p+q)/2;
	while(p<=q)
	{
		if(a[m]==e) return 1;
		if(a[m]>e)  q=m-1;
		if(a[m]<e)  p=m+1;
		m=(p+q)/2;
	}
	return 0;
}
int main()
{
	int n,i,t,j,e;
	scanf("%d",&n);
	int a[n],p=0,q=n-1;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	scanf("%d",&e);
    if(bi_ser(a,e,p,q))
    {
    	printf("found");
	}
	else
	{
		printf("not found");
	}
}

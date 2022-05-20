#include<stdio.h>
int ser(int *a ,int n,int e)
{
	static int i=0;
	if(i==n) return 0;
		if(a[i]==e)
		return 1;
	i++;
	return(a,n,e);
}
int rep(int *a,int n,int e)
{
   static int c=0,i=0;
	if(i==n)  return c;
		if(a[i]==e)
		c++;
	i++;
	return rep(a,n,e);	
}
int ind(int *a ,int n,int e)
{
	static int i=0;
		if(a[i]==e)
		return i;
	i++;
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

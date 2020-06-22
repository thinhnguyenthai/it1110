#include<stdio.h>
 
int main() 
{
	int n;
	int a[10000] ;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]); 
	}
	for(int i=0;i< n-1;i++)
	 for (int j=i;j<n;j++)
	  if(a[j]<a[i])
	  {
	  	int tg=a[j];
		   a[j]=a[i];
		   a[i]=tg; 
	  } 
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]); 
	} 
	return 0; 
}


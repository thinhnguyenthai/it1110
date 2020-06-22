
#include<stdio.h>
 
int main() 
{
	int n;
	int a[100] ;
	float sum_a=0;
	float sum_d=0;
	int sl;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]); 
	}
	for(int i=0;i< n;i++)
	{
		if(a[i]<0)
		{
			sl++;
			sum_a=sum_a+a[i];
			 
		}
		if(a[i]>0) 
		{
			sum_d=sum_d+a[i]; 
		}
	}
	if(sl>=1)
	{
		printf("%f ",(float)(sum_a/sl));
		printf("%f",sum_d) ;
	}
	else
	{ 
		printf("%f ",0.0);
		printf("%f",sum_d);
	}
	return 0; 
}


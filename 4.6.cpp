#include <stdio.h>
#include <math.h>
main()
{
	int n;
	float x;
	do {scanf("%d%f", &n,&x);}
	while (n<=0);
	int t=1;
	float s1=1,s2=1,s3=1;
	for (int i=1; i<=n; ++i)
	{ t=t*i;
	s1=s1+pow(x,i);
	s2=s2+(pow(-1,i)*pow(x,i));
	s3=s3+(pow(x,i)/t);
	}
		printf ("%f", s1);
		printf ("\n%f", s2);
		printf ("\n%f", s3);
	return 0;	
}

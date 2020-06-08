#include <stdio.h>
#include <math.h>
main()
{
	float a,b,c,delta,u,v;
	scanf("%f%f%f", &a,&b,&c);
	if(a==0)
	{
		if(b==0)
		{
			if(c==0) printf("Phuong trinh vo so nghiem");
			else printf("Phuong trinh vo nghiem");
		}
		else printf("%f", -c/b);
	}
	else 
	{
		delta=b*b-4*a*c;
		if (delta==0) printf ("%f", -b/(2*a));
		if (delta<0) 
		{
				u=-b/(2*a);
			v=sqrt(fabs(delta))/(2*a);
			printf ("%f+%fi",u,v);
			printf("\n%f-%fi",u,v);
		}
	    if (delta>0) printf ("%f\n%f", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
	}
	return 0;
}

#include <stdio.h>
#include <conio.h>
 main()
 {int a1,b1,a,b,UCLN,BCNN;
  do {
      scanf("%d",&a);
      scanf("%d",&b);}
  while(a<=0||b<=0);
  a1=a;b1=b;
  while (a!=b)
        {if (a>b) a=a-b;
         else b=b-a;}
        printf("%d",a);
		printf("\n%d",(a1*b1)/a);
 }

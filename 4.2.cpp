#include <stdio.h>
#include <conio.h>
#include <math.h>
 main()
 {int n,i,kt=0;
  scanf("%d",&n);
  if(n<=1) printf("Khong phai so nguyen to");
  else {
  for(i=2;i<=sqrt(n);i++)
     if(n%i==0) {kt++; break;}
  if(kt==0) printf("La so nguyen to");
  else printf("Khong phai so nguyen to");
     }
  getch();
 }

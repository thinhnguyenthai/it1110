#include <stdio.h>
#include <conio.h>
 main()
 {int i,N,d=0;
  float a[9],T=0;
  do {printf("\n Nhap so nguyen 0<N<10 : ");
      scanf("%d",&N);}
  while(N<=0||N>=10);
  printf("\n Nhap mang:");
  for(i=0;i<N;i++) {printf("\n Nhap so thu %d : ",i+1);
                    scanf("%f",&a[i]);}
  printf("\n Mang vu nhap la:\n");
  for(i=0;i<N;i++) printf("%f  ",a[i]);
  for(i=1;i<N-1;i++) if(a[i]>a[i-1]&&a[i]>a[i+1]) {T=T+a[i];d++;}
  if(d==0) printf("\n Khong co phan tu cuc dai trong day");
  else printf("\n Tong cac phan tu cuc dai trong day la %f",T);
  getch();
 }

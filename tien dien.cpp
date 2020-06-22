#include <stdio.h>
#include <conio.h>
main()
{int N,T=0;
do { scanf("%d",&N);}
while(N<=0||N>=10000);
if(N>400) {T=T+3000*(N-400);N=400;}
if(N>300) {T=T+2500*(N-300);N=300;}
if(N>200) {T=T+2000*(N-200);N=200;}
if(N>100) {T=T+1500*(N-100);N=100;}
if(N>50) {T=T+1000*(N-50);N=50;}
T=T+500*N;
printf("\n %d",T);
getch();
}

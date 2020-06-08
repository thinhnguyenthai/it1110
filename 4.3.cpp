#include<stdio.h>
int main()
{
    int n, tong = 0;
    do scanf("%d", &n);
    while(n<=0||n>=1000);
    while(n>0) {tong+=n%10; n/=10;}
    printf("%d", tong);
    return 0;
}


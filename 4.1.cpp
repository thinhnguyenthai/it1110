#include<stdio.h>
int main()
{
	int n,s=1;
	do scanf("%d",&n);
	while (n<=0||n>=8);
	for(int i=2;i<=n;++i)
	s=s*i;
    printf("%d",s);
    return 0;
}

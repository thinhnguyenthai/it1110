#include<stdio.h> 
#include<string.h>
int main() 
{
	int n;
	do
	{
		scanf("%d\n",&n);
	} while(n>100||n<1);
	char s[150][150];
	for(int i=0;i<n;i++) 
	{
		gets(s[i]);
		while(s[i][0]==' ')
		strcpy(&s[i][0],&s[i][1]);
		while(s[i][strlen(s[i])-1]==' ')
		s[i][strlen(s[i])-1]='\0';
		for(int j=0;j<strlen(s[i]);j++) 
		{
			if(s[i][j]== ' ' && s[i][j+1]==' ' )
			{
				strcpy(&s[i][j],&s[i][j+1]) ;
				j--; 
			}
			if(s[i][j]>='a'&& s[i][j]<='z')
			{
				s[i][j]=s[i][j]-32; 
			} 
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%s:%d\n",s[i],strlen(s[i])); 
	} 
	return 0; 
}


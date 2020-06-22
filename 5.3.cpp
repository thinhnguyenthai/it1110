#include<stdio.h>
#include<string.h> 
int main() 
{
	char s[150];
	char tmp[150];
	int len=0; 
	int j=0;
	gets(s) ;   
	while(s[j]==' ') 
	 j++; 
	if (j>= strlen(s))
	{
		printf(":0") ;
	 	return 0; 
	}
	for(int i=j;i<strlen(s);i++)
	{
		if(s[i]==' '&& s[i+1]==' ')
		{
			continue ;
		} 
		if(s[i]>'Z') 
		{
			tmp[len] =s[i] -32;
			len++;
			continue; 
		}
		tmp[len]=s[i];
		len++; 
	}
	while(tmp[len-1]==' ')
	{
		len--; 
	}
	for(int i=0;i<len;i++)
	{
		printf("%c",tmp[i]); 
	}   
		printf(":%d" ,len); 
	return 0;	
	
}


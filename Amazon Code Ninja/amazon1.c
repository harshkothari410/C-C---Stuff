#include<stdio.h>
#include<string.h>
char s[60000];
char ans[10000];
int main()
{
	int i,j,k,l,q;

	scanf("%s",s);
	printf("%s",s);	
	
	l = strlen(s);	
	k=0;	
	for(i=0;i<l;i++)
	{
		
			if(s[i]=='<' || s[i]=='>' || s[i]=='/')
			continue;
			
			for(j=0;j<=i;j++)
			{
				if(ans[j] == s[i])
				goto harsh;	
			}
		
			ans[k] = s[i];
			k++;
	harsh: printf("");
	}
	
	q = strlen(ans);
	printf("\n");
	for(i=0;i<q;i++)
	{
		printf("%c ",ans[i]);	
	}
	
	return(0);
}

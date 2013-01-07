/* Enter your code here. Read input from STDIN. Print output to STDOUT */
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
#include<stdio.h>
#include<string.h>
char s[600000];
char ans[10000];
char g[10000][10000];
int main()
{
	int i,j,k,l,q,o;
        int flag[20];
        int count;
	scanf("%s",s);
	
	
	l = strlen(s);	
	k=0;	
	i=1;
    o=0;
       while(1)
       {
               if(s[i]=='\n')
                   break;
           
           
           
               
                   g[o][0] = s[i+4];
                       
                   while(1)
                   {
                       if(s[i]=='<' || s[i]=='>')
                           continue;
                       
                       if(s[i]== '/' && g[o][0] == s[i+1])
                           break;
                       
                       if(s[i]=='/')
                           continue;
                       for(j=1;j<=i;j++)
			{
				if(g[o][j] == s[i])
				goto harsh;	
			}
		
			ans[k] = s[i];
			k++;
                       
	harsh: i++;
                       
                   }
           o++;
       }
    
    
    
    
    
    
    
    
    
    
    ans[0] = s[1]; 
    
    for(i=0;i<10000;i++)
	{
		
			
			for(o=0;o<10000;o++)
                        {
            
            
                        for(j=0;j<=i;j++)
			{
				if(ans[j] == g[o][i])
				goto harsh1;	
			}
		
			ans[k] = g[o][i];
			k++;
	harsh1: printf("");
                        }
	}
	
	
	printf("%s",g[0]);
	q = strlen(ans);
	printf("\n");
	for(i=0;i<q;i++)
	{
		printf("%c ",ans[i]);	
	}
	
	return(0);
}

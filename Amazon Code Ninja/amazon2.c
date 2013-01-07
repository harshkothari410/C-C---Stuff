/* Enter your code here. Read input from STDIN. Print output to STDOUT */
#include<stdio.h>
#include<string.h>
char s[600000];
char ans[10000];
char a[10000];
char ans_last[600000];
int main()
{
	int i,j,k,l,q,count,d;
	int r;
        i=0;
		
		
		gets(a);
		
	
		
	scanf("%s",s);
		
	
	l = strlen(s);
        q = strlen(a);
	k=0;	
	
	for(i=0;i<q;i++)
        {
            if(a[i]==' ')
                continue;
            
            ans[k] = a[i];
            k++;
        }
	
	q = strlen(ans);
	printf("\n");
	for(i=0;i<q;i++)
	{
		printf("%c ",ans[i]);	
	}
	
	count =0;
	d=0;
	for(i=0;i<l;i++)
	{
		if(s[i]=='/')
		{
		if(d%3==0)
		{d=0;goto h;}
		count++;
		d++;	
		}
	
		d++;
		h: printf("");
	}
	ans_last[0] = '<';
	ans_last[1] = ans[0];
	ans_last[2] = '>';
	r=3;
	for(i=1;i<=count;i++)
	{
		for(j=1;j<q;j++)
		{
		ans_last[r] = '<';
		ans_last[r+1] = ans[j];
		ans_last[r+2] = '>';
		r = r+3;
		}
		for(j=1;j<q;j++)
		{
		ans_last[r] = '<';
		ans_last[r+1] = '/';
		ans_last[r+2] = ans[j];
		ans_last[r+3] = '>';
		r = r+4;
		}
		
	}
	ans_last[r] = '<';
	ans_last[r+1] = '/';
	ans_last[r+2] = ans[0];
	ans_last[r+3] = '>';
    printf("\n%s",ans_last);
	return(0);
}

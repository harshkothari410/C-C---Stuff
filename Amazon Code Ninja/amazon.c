#include<stdio.h>
int mat[1000][1000]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int ans[1000][1000]= {0};
	
	void clock(int, int);
	void anticlock(int, int);
int main()
{
	int i,j,k,l,b;
	int N=4;
	int c=0;	
	
//	scanf("%d",&N);
/*	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		scanf("%d",&mat[i][j]);	
	}*/
	printf("\n");
		for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		printf("%d ",mat[i][j]);	
		printf("\n");
	}
		j=N;
		c=0;
		b = (N/2);
		printf("%d  \n ", b);
		for(i=0;i<N/2;i++)
		{
			
			
			if(c%2 == 0)
			{
				anticlock(i,j-1);
				c++;
				j--;
			}
			else
			{
				clock(i,j-1);
				c++;
				j--;
			}
		}
		
		if(N%2 == 1)
		{
			ans[(N/2)][(N/2)] = mat[(N/2)][(N/2)];	
		}
		
		
		printf("\n");
		for(i=0;i<N;i++)
		{
		for(j=0;j<N;j++)
		printf("%d ",ans[i][j]);
		printf("\n");	
		}
		
	
	
	
return 0;	
}



void clock(int m,int n)
{
	int i,k,j,l,e,w;
	int p,q,count=0;
	p=m;
	q=n;
	k = m+1;
	l = m; 
//	while(p!=q)
//	{

		for(i=p;i<=q;i++)
		{
			
			ans[p][i] = mat[k][l];			
			 l++;
			if(count==0)
			{
			k--;
			l=m;
			}
			count++;			 
		
		
		}

		for(j=p+1;j<=q;j++)
		{
			
			ans[j][q] = mat[k][l];
			k++; 
						
			
		}

		for(w=q-1;w>=p;w--)
		{
			ans[q][w] = mat[k][l];
			l--;			
		}

		for(e=q-1;e>=p+1;e--)
		{
			ans[e][p] = mat[k][l];
			k--;		
		}



//p++;
//q--;



//}
	
	
	
	
}

void anticlock(int m,int n)
{
	int i,k,j,l,e,w;
	int p,q,count=0;
	p=m;
	q=n;
	k = m+1;
	l = m; 
//	while(p!=q)
//	{

		for(i=p;i<=q;i++)
		{
			
			ans[i][p] = mat[l][k];			
			l++;
			if(count==0)
			{
			k--;
			l=m;
			}
			count++;
		
		
		}

		for(j=p+1;j<=q;j++)
		{
			
			ans[q][j] = mat[l][k];
			k++; 
						
			
		}

		for(w=q-1;w>=p;w--)
		{
			ans[w][q] = mat[l][k];
			l--;			
		}

		for(e=q-1;e>=p+1;e--)
		{
			ans[p][e] = mat[l][k];
			k--;		
		}



//p++;
//q--;



//}
	
	
	
	
}

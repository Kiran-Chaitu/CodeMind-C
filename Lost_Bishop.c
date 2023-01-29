#include <stdio.h>
#define R 8
#define C 8
int main() {
    char ch[R][C];
    int i,j,x,y,t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
    	for(i=0;i<R;i++)
	{
        for (j=0;j<C;j++)
		{
            scanf(" %c",&ch[i][j]);
        }
    }
    for(i=0;i<R;i++)
	{
        for(j=0;j<C;j++)
		{
            if(ch[i][j]=='#')
			{
            	if(ch[i-1][j-1]=='#'&&ch[i-1][j+1]=='#'&&ch[i+1][j-1]=='#'&&ch[i][j]=='#')
            	{
            		x=i;
            		y=j;
				}
			}
        }
    }
    printf("%d %d
",x+1,y+1);
	}
    return 0;
}
#include <stdio.h>
int main() {
    char ch[8][8];
    int i,j,x,y,c=0,t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
    	for(i=0;i<8;i++)
	{
        for (j=0;j<8;j++)
		{
            scanf(" %c",&ch[i][j]);
        }
    }
    for(i=0;i<8;i++)
	{
        for(j=0;j<8;j++)
		{
            if(ch[i][j]=='#')
			{
            	if(ch[i-1][j-1]=='#'&&ch[i-1][j+1]=='#'&&ch[i+1][j-1]=='#'&&ch[i][j]=='#')
            	{
            		c++;
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
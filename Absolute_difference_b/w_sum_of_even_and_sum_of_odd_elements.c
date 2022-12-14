#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,esum=0,osum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            esum+=a[i];
        }
        if(a[i]%2!=0)
        {
            osum+=a[i];
        }
    }
    printf("%d",abs(esum-osum));
    return 0;
}
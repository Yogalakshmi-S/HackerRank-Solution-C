#include<stdio.h>
int main()
{
    int i,j,n,k,max=0,max1=0,max2=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=1;i<n;i++){
    for(j=i+1;j<=n;j++)
    {
        
        if(((i&j)>max) && ((i&j)<k))
        {
            max=i&j;
        }
        if((i|j)>max && (i|j)<k)
        {
            max1=i|j;
        }
        if(((i^j)>max2) && ((i^j)<k))
        {
            max2=i^j;
        }
        }
    }
    
    printf("%d\n%d\n%d",max,max1,max2);
return 0;
}

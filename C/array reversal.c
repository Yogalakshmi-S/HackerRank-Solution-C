#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arr[1000],arr1[1000],i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=n;i>=1;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}


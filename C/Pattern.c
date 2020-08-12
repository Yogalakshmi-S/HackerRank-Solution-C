#include <stdio.h>

int main()
{
    int n,i,arr[1999],start,end,size,center,k=0;
    scanf("%d",&n);
    size=(2*n)-1;
    center=(size-1)/2;
    for(i=0;i<size;i++)
    {
        arr[i]=n;
        printf("%d ",arr[i]);
    }
    printf("\n");
    start=1;
    end=size-1;
  while(k<center)
  {
    for(i=start;i<end;i++)
    {
        arr[i]=arr[i]-1;
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    k++;
    start++;
    end--;
  }
  arr[center]++;
  for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
  start=center;
  end=center;
  start=center-1;
    end=center+1;
  while(end<(size-1))
  {
    
  for(i=start;i<=end;i++)
  {
      arr[i]=arr[i]+1;
  }
  for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
  start--;
  end++;
 printf("\n");
  }
    return 0;
}
    

    

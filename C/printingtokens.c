#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char s[1000];
    scanf("\n");
    scanf("%[^\n]%*c",s);
    int i;
    for(i=0;i<strlen(s);i++)
    {if(s[i]!=' '){
            printf("%c",s[i]);}
            else{
            printf("\n");  }  }    
        return 0;
}

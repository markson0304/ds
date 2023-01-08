#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d\n",a,b, a + b);
    printf("%d*%d=%d\n",a,b, a * b);
    printf("%d-%d=%d\n",a,b, a - b);
    //餘數>=0
    int c=a%b;
    if(c<0)
        printf("%d/%d=%d...%d\n",a,b, (a/b)-1,c+b );
    else
        printf("%d/%d=%d...%d\n",a,b, a/b,c );
    return 0;
}
#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
  
  
  
int main ()  
{  
    int i,n;  
    int a;
    scanf("%d", &n);
    i=1;  
    a=0;  
    while(i <= n)  
    {  
        if(i%3 == 0)  
        {  
            a += i;  
        }  
            i++;  
    }
    printf("%d\n", a);
}  
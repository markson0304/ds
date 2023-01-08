#include <stdio.h>  
#include <string.h>  
#include <stdlib.h> 
    
  
int main()  
{  
    int a,b,t;
    scanf("%d %d", &a, &b);
    while(b != 0){  
        t=b;  
        b=a%b;  
        a=t;  
    }
    printf("%d\n", a);
     
} 
#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>     
int main()    
{    
    int x,y,r;
    scanf("%d %d", &x, &y);    
    r = x*x + y*y;    
    if(x <= 200 && y <= 200 && r <= 40000)
        printf("inside\n");   
    else    
        printf("outside\n");     
} 
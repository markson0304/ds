#include <stdio.h>  
#include <string.h>  
#include <stdlib.h> 
  
int main()  
{  
    int i;
    scanf("%d", &i);
    if(i <= 5 && i >= 3)  
        printf("Spring\n");
    else if(i <= 8 && i >= 6)
        printf("Summer\n");    
    else if(i <= 11 && i >= 9)  
        printf("Autumn\n");  
    else if(i <= 2 || i == 12)  
        printf("Winter\n");  
} 
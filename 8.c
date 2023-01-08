#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>     
int main ()  
{  
    int i;  
    int n;  
    int counter;

    scanf("%d", &n);
      
    counter = 0;  
    i=1;  
    while(i <= n)  {  
        if(n%i == 0){  
            counter = counter + 1;  
        }  
        i = i + 1;  
    }  
  
    if(counter == 2)
        printf("YES\n");
    else  
        printf("NO\n");  
      
      
      
}  
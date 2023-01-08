#include <stdio.h>  
  
int main()  
{  
    int i;  
    scanf("%d",&i);  
    if(i%400 == 0)  
    {  
        printf("Bissextile Year\n");  
    }  
    else   
    {  
        if(i%100 == 0)  
        {  
            printf("Common Year\n");  
        }  
        else if(i%4 == 0)  
        {  
            printf("Bissextile Year\n");  
        }  
        else  
        {  
            printf("Common Year\n");  
        }  
    }  
} 
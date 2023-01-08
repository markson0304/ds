#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>   
int main ()  
{  
    int num;  
    char c;  
    int r1[100],r2[100],i1[100],i2[100];  
    int ansr[100],ansi[100];
    scanf("%d\n", &num);
    for(int i = 0;i < num;i++)  
    {  
        scanf("%c %d %d %d %d\n", &c,&r1[i],&i1[i],&r2[i],&i2[i]);
        if(c == '+'){  
            ansr[i] = r1[i] + r2[i];  
            ansi[i] = i1[i] + i2[i];  
        }  
        else if(c == '-'){  
            ansr[i] = r1[i] - r2[i];  
            ansi[i] = i1[i] - i2[i];  
        }  
        else if(c == '*'){  
            ansr[i] = r1[i]*r2[i] - i1[i]*i2[i];  
            ansi[i] = r1[i]*i2[i] + r2[i]*i1[i];  
        }  
    }  
    for(int i = 0;i < num;i++){
        printf("%d %d\n", ansr[i], ansi[i]);
    }  
      
  
}  
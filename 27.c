#include <stdio.h>  
  
void cmpNumber(int,int);  
int main ()  
{  
    int ans;  
    int num;  
    scanf("%d",&ans);  
    while(scanf("%d",&num))  
    {  
        if(num==0)break;  
        cmpNumber(ans,num);  
    }  
}  
void cmpNumber(int x,int y)  
{  
    int a1, a2, a3, a4;  
    a1 = x / 1000;  
    a2 = (x / 100) % 10;  
    a3 = (x /10) % 10;  
    a4 = x % 10;  
  
    int b1, b2, b3, b4;  
    b1 = y / 1000;  
    b2 = (y / 100) % 10;  
    b3 = (y /10) % 10;  
    b4 = y % 10;  
  
    int i,j;  
    i=0;  
    j=0;  
    if(a1==b2||a1==b3||a1==b4)j++;  
    else if(a1==b1)i++;  
  
    if(a2==b1||a2==b3||a2==b4)j++;  
    else if(a2==b2)i++;  
  
    if(a3==b1||a3==b2||a3==b4)j++;  
    else if(a3==b3)i++;  
  
    if(a4==b1||a4==b2||a4==b3)j++;  
    else if(a4==b4)i++;  
  
    printf("%dA%dB\n",i,j);  
}
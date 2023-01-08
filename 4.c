#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>   
int main()
{
    int h1, h2, m1, m2, t, sum = 0;
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);
    t = 60*(h2-h1)+(m2-m1);
    if(t<=120 && t>=30)
        sum=(t/30)*30;
    else if(t>120 && t<=240)
        sum=((t-120)/30)*40+120;
    else if(t>240)
        sum=((t-240)/30)*60+280;
    printf("%d\n", sum);
}
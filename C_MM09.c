#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>

int main()
{
    int i,result=1;
    scanf("%d", &i);
    if(i>31)
        printf("Value of more than 31\n");
    else
    {
        //位移運算元，每往左即乘2
        result = result << i;
        printf("%d\n",result);
    }

    return 0;
}
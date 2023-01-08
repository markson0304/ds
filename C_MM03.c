#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>
int main()
{
    //宣告兩數
    int a,b;
    //重複輸入
    while((scanf("%d %d",&a,&b))!=EOF){
        printf("%d\n", a + b);
    }
    return 0;
}
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>


int main()
{
    //宣告兩數分別代表底、高
    int a,b;
    //輸入
    scanf("%d %d",&a,&b);
    //計算面積
    double area = (a*b)/2.0;
    //四捨五入取到小數點第一位
    printf("%.1lf\n", area);

    return 0;
}
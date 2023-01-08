#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>

int main()
{
    //宣告三數分別代表上底、下底、高
    int a,b,c;
    //輸入
    scanf("%d %d %d",&a,&b,&c);
    //計算梯形面積
    double area = ((a+b)*c)/2.0;
    //四捨五入取到小數點第一位
    printf("Trapezoid area:%.1lf\n", area);

    return 0;
}
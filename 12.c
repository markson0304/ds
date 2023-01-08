#include <stdio.h>

int A(int m)
{
    if(m==0)
        return 1;
    else if(m==1)
        return 2;
    else
        return (A(m-1)+A(m/2));
}
int main ()
{
    int m;
    scanf("%d", &m);
    printf("%d\n", A(m));
}
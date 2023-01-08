#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    scanf("%d", &num);
    int start[30] = {0};
    int end[30] = {0};
    int time[25] = {0};
    for (int i = 0; i < num;i++){
        scanf("%d %d", &start[i], &end[i]);
    }
    for (int i = 0; i < num;i++){
        for (int j=start[i]; j<end[i]; j++){
            time[j]++;
        }
    }
    int max = time[0];
    for (int i = 1; i < 24;i++){
        if(time[i]>max)
            max = time[i];
    }
    printf("%d\n", max);
}
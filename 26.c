#include <stdio.h>

int sum(int x)
{
    int ans = 0;
    while(x>0){
        ans += x % 10;
        x /= 10;
    }
    return ans;
}
void swap(int *a,int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
} 
void swap1(int s1[],int i,int j)
{
    int tmp;
    tmp = s1[i];
    s1[i] = s1[j];
    s1[j] = tmp;
}
int main()
{
    int n;
    int arr[10];
    scanf("%d", &n);
    for (int i = 0; i < n;i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n;i++){
        for (int j = i+1; j < n;j++){
            if(sum(arr[i])>sum(arr[j])){
                swap1(arr,i,j);
            }
            else if(sum(arr[i])==sum(arr[j])){
                if(arr[i]>arr[j]){
                    swap1(arr,i,j);
                }
            }
        }
    }
    for (int i = 0; i < n-1;i++){
        printf("%d ", arr[i]);
    }
    printf("%d", arr[n-1]);
    //printf("\n");
}
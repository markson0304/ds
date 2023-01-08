#include <stdio.h>  
#include <stdbool.h>  
  
void bubble_sort(int arr[], int n);  
int main()  
{  
    int num[4];  
    int bb;  
  
    for(int i = 0;i < 4;i++)  
    {  
        scanf("%d",&num[i]);  
    }  
    bubble_sort(num,4);  
    bool a = (num[0] == num[1])?true:false;  
    bool b = (num[1] == num[2])?true:false;  
    bool c = (num[2] == num[3])?true:false;  
    bb = a + 2*b + 4*c;  
      
    switch (bb)  
    {  
    case 0:case 3:case 6:printf("R\n");break;  
    case 1:printf("%d\n",num[2] + num[3]);break;  
    case 2:printf("%d\n",num[0] + num[3]);break;  
    case 4:printf("%d\n",num[0] + num[1]);break;  
    case 5:printf("%d\n",num[2] + num[3]);break;  
    case 7:printf("WIN\n");break;  
    }  
      
}  
  
void bubble_sort(int arr[], int n) {  
  for (int i = 0; i < n; ++i) {  
    for (int j = 0; j < i; ++j) {  
      if (arr[j] > arr[i]) {  
        int temp = arr[j];  
        arr[j] = arr[i];  
        arr[i] = temp;  
      }  
    }  
  }  
}
#include <stdio.h>  
  
void bubble_sort(float array[], int n) {  
    for (int i=0; i<n-1; i++) {  
        for (int j=0; j<n-i-1; j++) {  
            if (array[j] > array[j+1]) {  
                float temp = array[j];  
                array[j] = array[j+1];  
                array[j+1] = temp;  
            }  
        }  
    }  
}  
int main()  
{  
    float num[10];  
    for(int i=0; i<10; i++){  
        scanf("%f", &num[i]);  
    }  
    bubble_sort(num,10);  
    printf("maximum:%.2f\n",num[9]);  
    printf("minimum:%.2f\n",num[0]);  
}
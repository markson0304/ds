#include <stdio.h>
#include <stdlib.h>
int main(){
	int arr[3][3];//開井字陣列 
	for(int i=0;i<3;i++)//3排讀三次 
	{
        scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]); //依序輸入 
		if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]){     //直接進行整排檢查
            printf("True\n");
            return 0;
        }
	}
	for(int x=0;x<3;x++)//直行檢查 
	{
	    if(arr[0][x]==arr[1][x]&&arr[1][x]==arr[2][x]){
	        printf("True\n");
            return 0;
        }
    }
	if(arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]){//反斜線檢查
	    printf("True\n");
        return 0;
    }
	else if(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0]){//斜線檢查 
	    printf("True\n");
        return 0;
    }
	else printf("False\n");;return 0; //都沒有 
}
#include <stdlib.h>  
#include <stdio.h>  
  
int main(){  
    int a,b;
    int count = 0;
    scanf("%d%d",&a,&b);  
    int box[a*b];
    for(int i=0;i<(a*b);i++){
    	scanf("%d",&box[i]);
	}
	for(int y=0;y<b;y++){
		for(int x=0;x<a;x++){
			count++;
			printf("%d",box[x*b+y]);
			if(count%a!=0){
				printf(" ");
			}
		}
		printf("\n");
	}
}  
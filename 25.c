#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int input=0;
    scanf("%d\n", &input);
    for (int i = 0; i < input;i++){
        char s[256];
		int sum=0;
        gets(s);
        for(int i=0;i<strlen(s);i++)//依字串長度進行字元轉換ASCII碼並加總 
		{
			sum+=(int)s[i];
		}
        printf("%d\n", sum);
    }
	return 0;
} 
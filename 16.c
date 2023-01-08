#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int appearNum(int p);
char inputS[500],inputL[500],save[500];
int main()
{
    gets(inputS);
    gets(inputL);
	printf("%d",appearNum(0));
	return 0;
}
int appearNum(int p)//字串遞迴(檢索字串，起始位置，被檢索字串) 
{
	int a=0;
	if(p>strlen(inputL))return a=0;//若偏移長度大於被檢索字串長度則回傳0 
	for(int i=0;i<strlen(inputS);i++)//依檢索字串長度進行迴圈 
	{
		if(inputL[i+p]==inputS[i])continue;//若比對符合，則持續比對至完全符合 
		else return a+=appearNum(p+1);//比對不符回傳當前符合次數 
	}
	a++;return a+=appearNum(p+1);//迴圈完畢表示比對完全符合，計次後往右偏移再測試 
}
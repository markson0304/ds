#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char in[256];
	gets(in);
	int p=0;
    scanf("%d", &p);
    for(int i=0;i<strlen(in);i++)
	{
		if((int)in[i]>='A'&&(int)in[i]<='Z')
		{
			in[i]=(char)(((int)(in[i]-'A')+p)%26+'A');
		}
		if((int)in[i]>='a'&&(int)in[i]<='z')
		{
			in[i]=(char)(((int)(in[i]-'a')+p)%26+'a');
		}
		if((int)in[i]>='0'&&(int)in[i]<='9')
		{
			in[i]=(char)(((int)(in[i]-'0')+p)%10+'0');
		}
	}
	printf("%s\n",in);
	return 0;
}
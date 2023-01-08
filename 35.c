#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tn=0;
    scanf("%d", &tn);
    while(tn--)
	{
		int T=0,m=0,k=0;
        scanf("%d %d %d", &T,&m,&k);
		int ks[k];
		for(int i=0;i<k;i++){
            ks[i]=0;
            scanf("%d", &ks[i]);
        }
		for(int i=0;i<k;i++)
		{
			for(int j=0;j<k;j++)
			{
				if(ks[i]<ks[j]){int t=0;t=ks[i];ks[i]=ks[j];ks[j]=t;}
			}
		}
		k=0;
		for(int i=0;i<m;i++){
            k+=ks[i];
        }
        //printf("%d\n", k);
        k>T?printf("Impossible\n"):printf("%d\n", k);;
	}	
	return 0;
}
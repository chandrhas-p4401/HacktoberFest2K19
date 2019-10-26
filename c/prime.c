#include <stdio.h>
int main(){
	int num,i,j;
	scanf("%d", &num);
	for(i=2;i<=num;i++)
	{
	    int f=0;
	    for(j=2;j<=i;j++)
	    {
	        if(i%j==0)
	        f++;

	    }
	     if(f==1)
	            printf("%d ",i);
	}
}

#include <stdio.h>
#include <stdlib.h>
#define N 20000

int a[100]={0},sum=0;

int check(int x)
{
    int i=0,y=0;
    for(i=0;i<100;i++)
    {
        if(a[i]==x)y=1;
    }
    return y;
}

void dn()
{
    int i=0,j=0,m=0,n=0,k=0;
    for(i=2;i<=N;i++)
    {
        if(check(i))continue;
        m=0;
        n=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)m+=j;
        }
        for(j=1;j<m&&m<=N;j++)
        {
            if(m%j==0)n+=j;
        }
        if(n==i)
        {
            a[k++]=i;
            a[k++]=j;
            sum++;
        }
    }
}

int main()
{
    int i=0;
    dn();
    printf("Sum=%d\n",sum);
    for(i=0;i<100&&a[i]!=0;i++)
    {
        printf("%d\t",a[i]);
        if((i+1)%2==0)printf("\n");
    }
    return 0;
}
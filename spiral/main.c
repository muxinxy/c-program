#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10]={{0}};
    int i=0,j=0,k=0,n=0,m=0,num=1,y=0;
    char s[2]={0,0};
    printf("Please input n(1-10):");
    gets(s);
    n=atoi(s);
    if(n<1||n>10)
    {
        printf("Error");
        exit(0);
    }
    y=n*(n+1)/2;
    k=n;
    while(num<=y)
    {
        for(m=0;m<k&&(num<=y);j++)
        {
            a[i][j]=num++;
            m++;
        }
        k--;
        i++;
        j-=2;
        for(m=0;m<k&&(num<=y);i++)
        {
            a[i][j]=num++;
            j--;
            m++;
        }
        k--;
        i-=2;
        j++;
        for(m=0;m<k&&(num<=y);i--)
        {
            a[i][j]=num++;
            m++;
        }
        j++;
        i++;
        k--;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(a[i][j]!=0)
                printf("%-2d ",a[i][j]);
        if(i!=n-1)printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a=0,num,b=0,n=0;
    double i=0;
    printf("请输入整数(1<=num<1e8)：");
    scanf("%d",&num);
    if(num>=1&&num<1e8)
    {
        a=num;
        while(a!=0)
        {
            a=a/10;
            n++;
        }
        i=n-1;
        a=num;
        printf("各位数字是：");
        while(i>=0)
        {
            if(a>=10)
            {
                b=a/(pow(10,i));
                printf("%d ",b);
                a=a%((int)(round(pow(10,i))));
            }
            else printf("%d\n",a);
            i--;
        }
        printf("它是一个%d位数\n",n);
        b=0;
        a=num;
        printf("逆序为：");
        while(a!=0)
        {
           b=a%10;
           printf("%d",b);
           a=a/10;
        }
        }
        else printf("error");

     return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,num1,num2;
    printf("������������a b��:");
    scanf("%d %d",&num1,&num2);
    a=num1;
    b=num2;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    printf("���Լ����%d\n",a);
    a=num1*num2/a;
    printf("��С��������%d",a);
    return 0;
}
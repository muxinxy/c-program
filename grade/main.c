#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 3
#define N 5

static float ave_s[M],ave_c[N];//����ȫ�����飬ѧ��ƽ���ɼ��Ϳγ�ƽ���ɼ�
static int x,y;//����ȫ�ֱ�������߷ֶ�Ӧ��ѧ���Ϳγ�

void average_s(float array[M][N])//����ѧ��ƽ���ֵĺ���
{
    int i,j;
    float sum_s;
    for(i=0;i<M;i++)
    {
        sum_s=0;
        for(j=0;j<N;j++)
        {
            sum_s=sum_s+array[i][j];
            ave_s[i]=sum_s/N;
        }
    }
}

void average_c(float array[M][N])//����γ�ƽ���ֵĺ���
{
    int i,j;
    float sum_c;
    for(j=0;j<N;j++)
    {
        sum_c=0;
        for(i=0;i<M;i++)
        {
            sum_c=sum_c+array[i][j];
            ave_c[j]=sum_c/M;
        }
    }
}

void high(float array[][N])//�ҳ���߷ֶ�Ӧ��ѧ���Ϳγ�
{
    int i,j;
    float Max=array[0][0];
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(Max<array[i][j])
            {
                Max=array[i][j];
                x=i;
                y=j;
            }
        }
    }
}

float s()//���㷽��ĺ���
{
    int i;
    float sum1=ave_s[0],sum2=ave_s[0]*ave_s[0];
    for(i=1;i<M;i++)
    {
        sum1=sum1+ave_s[i];
        sum2=sum2+ave_s[i]*ave_s[i];
    }
    return (sum2/M-(sum1/M)*(sum1/M));
}

void initial(float array[][N])//�����������ĺ���
{
    int i,j;
    srand((unsigned)time(NULL));//�������������������Ϊʱ��
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            array[i][j]=60+rand()%40;//�����ɵ���������õ�60-99֮�䣬����ֵ���ɼ�����
        }
    }
}
int main()
{
    int i;
    float s2;
    float score[M][N]={{70,70,70,70,70},{70,70,70,70,70},{70,70,70,70,70}};//����ɼ�����
    //float score[M][N]={{70,70,70,70,70},{70,70,70,100,70},{70,70,70,70,70}};
    /*
    float score[M][N];
    initial(score);
    */
    printf("Averages of students are ");
    average_s(score);//���ú�������ѧ��ƽ����
    for(i=0;i<3;i++)
    {
        printf("%lf ",ave_s[i]);
    }
    printf("\nAverages of courses are ");
    average_c(score);//���ú�������γ�ƽ����
    for(i=0;i<5;i++)
    {
        printf("%lf ",ave_c[i]);
    }
    high(score);//���ú���������߷ֶ�Ӧ��ѧ���Ϳγ�
    printf("\nThe score of the No.%d course of the No.%d student is the highest.",y+1,x+1);
    s2=s();//���ú������㷽��
    printf("\nThe s2 =%lf",s2);
    return 0;
}
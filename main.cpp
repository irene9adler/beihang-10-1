//����10���һ��
/*����̩�չ�ʽ��cos(x)=1-x2/2!+x4/4!-������ʽ�Ѹ�����Ҫ�ľ���ע��ϸ�ڣ�����׳˵Ĵ洢�����double����???��������C���Ե��Ѷȡ�*/
//unsure
#include <stdio.h>
#include <math.h>
double jiecheng(int n)
{
    int i;
    double result = 1;
    for(i=1;i<=n;i++)
        result*=i;

    return result;
}

double cos (int x)
{
    double val = 1;
    int i = 2;
    int s;
    while(i<=4)//ֹͣ����
    {
        s = pow(-1,(i/2)%2);
        val+= s*(pow(x,i)/jiecheng(i));
        i+=2;
    }

}

int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        printf("%lf\n",cos(x));
    }
    return 0;
}

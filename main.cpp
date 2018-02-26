//北航10年第一题
/*利用泰勒公式求cos(x)=1-x2/2!+x4/4!-……公式已给，重要的就是注意细节（比如阶乘的存储最好用double类型???），二级C语言的难度。*/
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
    while(i<=4)//停止条件
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

/*����Ҫ��ʵ��һ������Xn��n�Ǵ��ڵ���1���������ĺ�����*/
#include <stdio.h>

double calc_pow(double x, int n);

int main()
{
    double x;
    int n;

    scanf_s("%lf %d", &x, &n);
    printf("%.0f\n", calc_pow(x, n));

    return 0;
}
double calc_pow(double x, int n)
{
    double product;
    if (n == 0)
        product = 1;
    else
        product = x * calc_pow(x,n - 1);
    return product;

}

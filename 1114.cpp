/*����Ҫ��ʵ��һ������Ǹ������׳˵ļ򵥺����������øú����� 1!+2!+3!+...+n! ��ֵ��
�����ӿڶ��壺
double fact( int n );
double factsum( int n );
����factӦ����n�Ľ׳ˣ������õݹ�ʵ�֡�����factsumӦ���� 1!+2!+...+n! ��ֵ����Ŀ��֤���������˫���ȷ�Χ�ڡ�

���в��Գ���������*/ 
#include <stdio.h>
double fact( int n );
double factsum( int n );
int main(void) {
   int n;
   scanf("%d",&n);
   printf("fact(%d) = %.0f\n", n, fact(n));
   printf("sum = %.0f\n", factsum(n));
   return 0;
}
double fact(int n)
{
	double project;
	if (n == 1 || n == 0)
		project = 1;
	else
	project = n * fact(n - 1);
	return project;
}
double factsum(int n)
{
	double sum = 0;
	for (; n > 0; n--)
		sum += fact(n);
	return sum;
}
